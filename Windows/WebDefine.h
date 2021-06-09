#include "Define"
#include <Windows.h>
#include <fstream>
#include <WinInet.h>
#pragma comment(lib, "Wininet")
space


/*Code for developer web*/
in testHTML(text Code) {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	writefs files;
		files.open("out.html",ios::app);
		files << "<HTML>" << nline;
		files << "<HEAD>" << nline;
		files << "<META NAME = " << dq << "GENERATOR" << dq << " Content = " << dq << "" << dq << ">" << nline;
		files << "<TITLE></TITLE>" << nline;
		files << "</HEAD>" << nline;
		files <<  Code << nline;
		files << "</HTML>" << nline;
		files.close();
		
	system "out.html");
		reader
}
/*dns server*/
in DNS(text SERVER) {
	text Command;
	Command += "netsh interface ip add dns ";
	Command += dq;
	Command += "ethernet";
	Command += dq;
	Command += " ";
	Command += SERVER;
	system Command.Cstr);
	reader
}
/*open Website*/
in openURL(text AddressURL) {
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
	F$ Command = AddressURL.Cstr;
	OpenWindow(0, 0, Command, 0, 0, SW_SHOW);
	ring AddressURL != "http") {
		print"Please go for website enter http or https";
	}
	backring{
	print" ";
	}
		reader
}

/*Open source web for developer*/
extern $ hr;
in SourceWeb(text AddWebsite, text AddressFile) {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	F$ Command = AddWebsite.Cstr;
	F$ Commands = AddressFile.Cstr;
	HRESULT hr = URLDownloadToFile(NULL, _T(Command), _T(Commands), 0, NULL);
	text Code;
	fullscreen
		opens openFile(AddressFile);
	ring openFile.is_open())
	{
		ringw getline(openFile, Code))
		{
			print Code << " " << "\n";
		}
	}
	print "Process End";
	readers;
	reader
}
in FTP(LPCSTR HOST,LPCSTR Username,LPCSTR Password,LPCSTR File,LPCSTR ReName) {
	HINTERNET hInternet = InternetOpen(NULL, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
	HINTERNET hFtpSession = InternetConnectA(hInternet, HOST, INTERNET_DEFAULT_FTP_PORT, Username, Password, INTERNET_SERVICE_FTP, INTERNET_FLAG_PASSIVE, 0);
	FtpPutFileA(hFtpSession, File, ReName, FTP_TRANSFER_TYPE_BINARY, 0);
	std::cout << "File Uploaded." << std::endl;
	InternetCloseHandle(hFtpSession);
	InternetCloseHandle(hInternet);
	return 0;
}

in OpenURL(text AddressURL) {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	F$ Command = AddressURL.Cstr;
	OpenWindow(0, 0, Command, 0, 0, SW_SHOW);
	ring  AddressURL != "http") {
		print"Please go for website enter http or https";
	}
	backring{
	print" ";
	}
		reader
}
/*Test speed internet*/
out ping(text test) {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	text Command;
	Command += "ping ";
	Command += test;
	system Command.Cstr);
	readers;
}
in Ping(text test) {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	text Commands;
	Commands += "ping ";
	Commands += test;
	system Commands.Cstr);
	readers;
		reader
}
/*Information about WIFI*/
in infoWiFi() {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	system "netsh wlan show networks");
	reader
}
/*Disconnect WIFI in system*/
in DisconnectWifi() {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	system "ipconfig/release");
	reader
}
/*Connect WIFI in system*/
in ConnectWifi() {
	Sleep(30);
	Screen(100, 100);
	Sleep(30);
	Screen(200, 200);
	Sleep(30);
	Screen(300, 300);
	Sleep(30);
	Screen(400, 400);
	Sleep(30);
	Screen(500, 500);
	Sleep(30);
	Screen(800, 500);
	Sleep(30);
	Screen(1000, 500);
	system "ipconfig/renew");
	reader
}
