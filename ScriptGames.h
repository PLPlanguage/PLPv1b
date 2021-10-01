#include "Define"
#include <fstream>
#include <Windows.h>
#include <tchar.h>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib,"wininet.lib")
space

namespace game {
	/*This code for Script code for Gammer*/
	extern char hr;
		//Control move 2D in Unity Engine 
		out UnityControl2D(text AddressFolder) {
			Sleep(10);
			Screen(0, 0);
			Sleep(10);
			Screen(100, 100);
			Sleep(10);
			Screen(150, 150);
			Sleep(10);
			Screen(200, 200);
			Sleep(10);
			Screen(250, 250);
			Sleep(10);
			Screen(300, 300);
			Sleep(10);
			Screen(350, 350);
			Sleep(10);
			Screen(400, 400);
			Sleep(10);
			Screen(450, 450);
			Sleep(10);
			Screen(500, 500);
			Sleep(10);
			Screen(550, 500);
			Sleep(10);
			Screen(600, 500);
			Sleep(10);
			Screen(650, 500);
			Sleep(10);
			Screen(700, 500);
			Sleep(10);
			Screen(750, 500);
			Sleep(10);
			Screen(800, 500);
			Sleep(10);
			Screen(850, 500);
			Sleep(10);
			Screen(900, 500);
			Sleep(10);
			Screen(950, 500);
			Sleep(10);
			Screen(1000, 500);
			text str;
			writefs files;
			files.open("CodeUnity.cs");
			files << "using System.Collections;" << nline;
			files << "using System.Collections.Generic;" << nline;
			files << "using UnityEngine;" << nline;
			files << nline << "public class CodeUnity : MonoBehaviour" << nline;
			files << "{" << nline;
			files << "public float speed = 1.5f;" << nline;
			files << "void Update()" << nline;
			files << "{";
			files << nline << "if (Input.GetKey(KeyCode.LeftArrow))";
			files << nline << "{";
			files << nline << "transform.position += Vector3.left * speed * Time.deltaTime;";
			files << nline << "}";
			files << nline << "if (Input.GetKey(KeyCode.RightArrow))";
			files << nline << "{";
			files << nline << "transform.position += Vector3.right * speed * Time.deltaTime;";
			files << nline << "}";
			files << nline << "if (Input.GetKey(KeyCode.UpArrow))";
			files << nline << "{";
			files << nline << "transform.position += Vector3.up * speed * Time.deltaTime;";
			files << nline << "}";
			files << nline << "if (Input.GetKey(KeyCode.DownArrow))";
			files << nline << "{";
			files << nline << "transform.position += Vector3.down * speed * Time.deltaTime;";
			files << nline << "}";
			files << nline << "}";
			files << nline << "}";
			files.close();
			text Command;
			Command += "move CodeUnity.cs ";
			Command += AddressFolder;
			Command += "\\Assets";
			system Command.Cstr);
			print"Code sent, please go to Unity Engine";
			readers;
		}
		//Control move 3D in Unity Engine
		out UnityControl3D(text AddressFolder) {
			Sleep(10);
			Screen(0, 0);
			Sleep(10);
			Screen(100, 100);
			Sleep(10);
			Screen(150, 150);
			Sleep(10);
			Screen(200, 200);
			Sleep(10);
			Screen(250, 250);
			Sleep(10);
			Screen(300, 300);
			Sleep(10);
			Screen(350, 350);
			Sleep(10);
			Screen(400, 400);
			Sleep(10);
			Screen(450, 450);
			Sleep(10);
			Screen(500, 500);
			Sleep(10);
			Screen(550, 500);
			Sleep(10);
			Screen(600, 500);
			Sleep(10);
			Screen(650, 500);
			Sleep(10);
			Screen(700, 500);
			Sleep(10);
			Screen(750, 500);
			Sleep(10);
			Screen(800, 500);
			Sleep(10);
			Screen(850, 500);
			Sleep(10);
			Screen(900, 500);
			Sleep(10);
			Screen(950, 500);
			Sleep(10);
			Screen(1000, 500);
			text str;
			writefs file;
			file.open("CodeUnity3D.cs");
			file << "using UnityEngine;" << nline;
			file << "using System.Collections;" << nline;
			file << "public class CodeUnity3D : MonoBehaviour" << nline;
			file << "{";
			file << nline << "CharacterController characterController;" << nline;
			file << "public float speed = 6.0f;" << nline;
			file << "public float jumpSpeed = 8.0f;" << nline;
			file << "public float gravity = 20.0f;" << nline;
			file << "private Vector3 moveDirection = Vector3.zero;" << nline;
			file << "void Start()" << nline;
			file << "{";
			file << nline << "characterController = GetComponent<CharacterController>();" << nline;
			file << "}" << nline;
			file << nline << "void Update()" << nline;
			file << "{";
			file << nline << "if (characterController.isGrounded)" << nline;
			file << "{";
			file << nline << "moveDirection = new Vector3(Input.GetAxis(" << dq << "Horizontal" << dq << "), 0.0f, Input.GetAxis(" << dq << "Vertical" << dq << "));" << nline;
			file << "moveDirection *= speed;" << nline;
			file << "if (Input.GetButton(" << dq << "Jump" << dq << "))" << nline;
			file << "{";
			file << nline << "moveDirection.y = jumpSpeed;" << nline;
			file << "}";
			file << nline << "}";
			file << nline << "moveDirection.y -= gravity * Time.deltaTime;" << nline;
			file << "characterController.Move(moveDirection * Time.deltaTime);" << nline;
			file << "}";
			file << nline << "}";
			file.close();
			text Command;
			Command += "move CodeUnity3D.cs ";
			Command += AddressFolder;
			Command += "\\Assets";
			system Command.Cstr);
			print"Code sent, please go to Unity Engine";
			readers;
		}
		//Template space in Unity Engine
		out UnitySpace1() {
			HRESULT hr;
			ringf in i = 0; i <= 10; i++) {
			print "Downloading File";
			print ".";
			Sleep(500);
			print ".";
			Sleep(500);
			print ".";
			Sleep(500);
			cls
		}
		LPCTSTR Url = _T("https://bitbucket.org/pohung/leapforce/downloads/LeapForce_Windows.zip"), File = _T("C:\\Users\\MGR_PC\\Downloads\\LeapForce_Windows.zip");
		hr = URLDownloadToFile(0, Url, File, 0, 0);

		switch (hr)
		{
			option S_OK :
			print "Successful download\n";
			break;
			option E_OUTOFMEMORY :
			print "Out of memory error\n";
			break;
			option INET_E_DOWNLOAD_FAILURE :
			print "Cannot access server data\n";
			break;
			option INET_E_INVALID_URL :
			print "Invalid URL \n";
			break;
		default:
			print "Unknown error\n";
			break;
		}
		system "tar -xf C:\\Users\\MGR_PC\\Downloads\\LeapForce_Windows.zip");
		ringf in i = 0; i <= 3; i++) {
		print "Extracting";
		print ".";
		Sleep(500);
		print ".";
		Sleep(500);
		print ".";
		Sleep(500);
		cls
		}
		system "start Windows\\ProjectFiles\\Assets\\Force.unity");
		print "Loading Unity Engine...";
		readers
		}
		//Template space in Unity Engine
		out UnitySpace2() {
			HRESULT hr;
			ringf in i = 0; i <= 10; i++) {
			print "Downloading File";
			print ".";
			Sleep(500);
			print ".";
			Sleep(500);
			print ".";
			Sleep(500);
			cls
		}
		LPCSTR url = _T("https://bitbucket.org/pohung/leapselectmove/downloads/LeapSelectMove_Windows.zip"), File = _T("C:\\Users\\MGR_PC\\Downloads\\LeapSelectMove_Windows.zip");
		hr = URLDownloadToFile(0, url, File, 0, 0);

		switch (hr)
		{
			option S_OK :
			print "Successful download\n";
			break;
			option E_OUTOFMEMORY :
			print "Out of memory error\n";
			break;
			option INET_E_DOWNLOAD_FAILURE :
			print "Cannot access server data\n";
			break;
			option INET_E_INVALID_URL :
			print "Invalid URL \n";
			break;
		default:
			print "Unknown error\n";
			break;
		}

		system "tar -xf C:\\Users\\MGR_PC\\Downloads\\LeapSelectMove_Windows.zip");
		ringf in i = 0; i <= 3; i++) {
		print "Extracting";
		print ".";
		Sleep(500);
		print ".";
		Sleep(500);
		print ".";
		Sleep(500);
		cls
		}
		system "start Windows\\ProjectFiles\\Assets\\PanScene.unity");
		print "Loading Unity Engine...";
		readers
		}
	
}
