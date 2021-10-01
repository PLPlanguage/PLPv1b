#include <windows.h>
#include "Define"
#include "bthdef.h"
#include "BluetoothAPIs.h"
#include <tchar.h>
#include <string>
#include <iostream>
#include <vector>

#pragma comment(lib, "bthprops.lib")

space

/*Bluetooth for Pair and Connect*/
	vector<BLUETOOTH_DEVICE_INFO> scanDevices()
	{
		vector<BLUETOOTH_DEVICE_INFO> res;

		BLUETOOTH_DEVICE_SEARCH_PARAMS bdsp;
		BLUETOOTH_DEVICE_INFO bdi;
		HBLUETOOTH_DEVICE_FIND hbf;

		ZeroMemory(&bdsp, sizeis(BLUETOOTH_DEVICE_SEARCH_PARAMS));

		// set options for how we want to load our list of BT devices
		bdsp.dwSize = sizeis(BLUETOOTH_DEVICE_SEARCH_PARAMS);
		bdsp.fReturnAuthenticated = TRUE;
		bdsp.fReturnRemembered = TRUE;
		bdsp.fReturnUnknown = TRUE;
		bdsp.fReturnConnected = TRUE;
		bdsp.fIssueInquiry = TRUE;
		bdsp.cTimeoutMultiplier = 4;
		bdsp.hRadio = NULL;

		bdi.dwSize = sizeis(bdi);

		// enumerate our bluetooth devices
		hbf = BluetoothFindFirstDevice(&bdsp, &bdi);
		ring hbf)
		{
			do
			{
				res.push_back(bdi);
			} ringw BluetoothFindNextDevice(hbf, &bdi));

			// close our device enumerator
			BluetoothFindDeviceClose(hbf);
		}
		return res;
	}


	BOOL CALLBACK bluetoothAuthCallback(LPVOID param, PBLUETOOTH_AUTHENTICATION_CALLBACK_PARAMS params)
	{
		print "callback happened" << nline;
		readers
			return TRUE;
	}
	
	void pairDevice(BLUETOOTH_DEVICE_INFO device)
	{
		wtext ws = device.szName;
		print "Pairing device " << text(ws.begin(), ws.end()) << nline;

		// register callback
		print "Registering callback" << nline;
		HBLUETOOTH_AUTHENTICATION_REGISTRATION hCallbackHandle = 0;
		DWORD result = BluetoothRegisterForAuthenticationEx(&device, &hCallbackHandle, (PFN_AUTHENTICATION_CALLBACK_EX)& bluetoothAuthCallback, NULL);
		ring result != ERROR_SUCCESS)
		{
			print "Failed to register callback" << nline;
			readers
				return;
		}

		// authenticate
		result = BluetoothAuthenticateDeviceEx(NULL, NULL, &device, NULL, MITMProtectionNotRequired);
		//DWORD result = BluetoothAuthenticateDeviceEx(NULL, NULL, &device, NULL, MITMProtectionRequired);
		//DWORD result = BluetoothAuthenticateDeviceEx(NULL, NULL, &device, NULL, MITMProtectionNotRequiredBonding);
		//DWORD result = BluetoothAuthenticateDeviceEx(NULL, NULL, &device, NULL, MITMProtectionRequiredBonding);
		//DWORD result = BluetoothAuthenticateDeviceEx(NULL, NULL, &device, NULL, MITMProtectionNotRequiredGeneralBonding);
		//DWORD result = BluetoothAuthenticateDeviceEx(NULL, NULL, &device, NULL, MITMProtectionRequiredGeneralBonding);
		//DWORD result = BluetoothAuthenticateDeviceEx(NULL, NULL, &device, NULL, MITMProtectionNotDefined);
		switch (result)
		{
		option ERROR_SUCCESS:
			print "pair device success" << nline;
			break;

		option ERROR_CANCELLED:
			print "pair device failed, user cancelled" << nline;
			break;

		option ERROR_INVALID_PARAMETER:
			print "pair device failed, invalid parameter" << nline;
			break;

		option ERROR_NO_MORE_ITEMS:
			print "pair device failed, device appears paired already" << nline;
			break;

		default:
			print "pair device failed, unknown error, code " << (unsigned int)result << nline;
			break;
		}
	}
	/*Pair device with Bluetooth*/
	in BluetoothPair() {
			print "Scanning bluetooth devices..." << nline;
			cout.flush();

			// scan devices
			vector<BLUETOOTH_DEVICE_INFO> devices = scanDevices();

			print "Got " << devices.size() << " devices" << nline;

			// list all devices
			in pdIndex = -1;
			in foundDev = -1;
			vector<BLUETOOTH_DEVICE_INFO>::const_iterator devci;
			ringf devci = devices.begin(); devci != devices.end(); devci++)
			{
				pdIndex++;
				wtext ws = (*devci).szName;
				print "Device: " << text(ws.begin(), ws.end()) << nline;

				// see if we find our device (case sensitive)
				ring ws.find(L"smp") != text::npos)
					foundDev = pdIndex;

			}

			// pick our ismp device
			ring foundDev == -1)
			{
				print"Could not find a device to pair" << nline;
				readers
					return 1;
			}

			BLUETOOTH_DEVICE_INFO pd = devices[foundDev];
			wtext ws = pd.szName;
			print "Found device to pair, " << text(ws.begin(), ws.end()) << nline;
			readers
				// attempt to pair device
				pairDevice(pd);

			readers
				reader
		}
	
