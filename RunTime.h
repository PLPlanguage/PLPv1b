#include "Define"
#include <tchar.h>
#include <urlmon.h>
#include <Windows.h>
#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>



#pragma comment(lib, "urlmon.lib")
space 
#define powershell backgroundBlue system "powershell");
/*This codes for Run programming language*/
in result() {
	readerf;
		readers;
	reader
		
}
in Found(text texs, text pattern) {
	size_t founds = texs.find(pattern,1);
	ring founds != string::npos){
	return founds+1;
			}
			reader
}
in Animation(text a,in c){
	print a;
	Sleep(c);
	clears
	reader

}
in Animation($ a,in c){
	print a;
	Sleep(c);
	clears
	reader

}
/*This code for find folder */
out findFolder(text address) {
	FullScreen
	text Command;
	Command += "tree ";
	Command += address;
	system Command.Cstr);
	println "End Proccess";
	readers;
}
out findfolder(text address) {
	text Command;
	Command += "tree ";
	Command += address;
	system Command.Cstr);
	println "End Proccess";
	readers;
}
/*Title application console*/
out title(text STRS) {
	text str2;
	F$ Commandsa = str2.Cstr;
	str2 = "title " + STRS;
	system Commandsa);
}
out Title(text STRS) {
	text str2;
	F$ Commandsa = str2.Cstr;
	str2 = "title " + STRS;
	system Commandsa);
}
/*Screen application console*/
in Screen(in LEFT, in TOP) {
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, LEFT, TOP, TRUE);
	reader
	
}
BOOL NT_SetConsoleDisplayMode(HANDLE hOutputHandle, DWORD dwNewMode)
{
	def BOOL(WINAPI* SCDMProc_t) (HANDLE, DWORD, LPDWORD);
	SCDMProc_t SetConsoleDisplayMode;
	HMODULE hKernel32;
	BOOL bFreeLib = FALSE, ret;
	fixed $ KERNEL32_NAME[] = "kernel32.dll";
	hKernel32 = GetModuleHandleA(KERNEL32_NAME);
	ring hKernel32 == NULL)
	{
		hKernel32 = LoadLibraryA(KERNEL32_NAME);
		ring hKernel32 == NULL)
			return FALSE;
		bFreeLib = true;
	}//if
	SetConsoleDisplayMode =
		(SCDMProc_t)GetProcAddress(hKernel32, "SetConsoleDisplayMode");
	ring SetConsoleDisplayMode == NULL)
	{
		SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
		ret = FALSE;
	}//if
	backring
	{
		DWORD dummy;
		ret = SetConsoleDisplayMode(hOutputHandle, dwNewMode, &dummy);
	}//else

	ring bFreeLib)
		FreeLibrary(hKernel32);
	return ret;
}//NT_SetConsoleDisplayMode

in Mouse(DWORD event,DWORD Left,DWORD Top) {
#define Mouse_LeftDown MOUSEEVENTF_LEFTDOWN
#define Mouse_LeftUp MOUSEEVENTF_LEFTUP
#define Mouse_Move MOUSEEVENTF_MOVE
#define Mouse_MiddleDown MOUSEEVENTF_MIDDLEDOWN
#define Mouse_RightDown MOUSEEVENTF_RIGHTDOWN
#define Mouse_RightUp MOUSEEVENTF_RIGHTUP
#define Mouse_Absolute MOUSEEVENTF_ABSOLUTE
	mouse_event(event, Left, Top,0,0);
	reader
}
// function to convert 
// Hexadecimal to Binary Number 
#pragma warning (disable:6001)
in HBinery(text sas) {
	text s = sas;
	textstream ss;
	ss << hex << s;

	UIN n;
	ringw ss >> n) {
		ringf in i = 8; i >= 0; i--)
			print ((n >> i) & 1) ? "1" : "0";
		print nline;
	}
	reader
}
in hex($ sum) {
	$ a= sum;
	print hex << (in)a;
	reader
}
in Key(BYTE Key) {
	keybd_event(Key, Key, 0, 0);
	reader
}
in KeyUp(BYTE Key) {
	keybd_event(Key, Key, KEYEVENTF_KEYUP, 0);
	reader
}
in screen(in LEFT, in TOP) {
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, LEFT, TOP, TRUE);
	reader
}
BOOL Color(WORD ColorHex) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorHex);
	reader
}
/*Location cursor in console*/
in HideCursor(){
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
reader
}
in Cursor(in Width,in Length) {
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
	CursorPosition.X = Width;
	CursorPosition.Y = Length;
	SetConsoleCursorPosition(console, CursorPosition);
	reader
}
in hidecursor() {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
	reader
}
in WindowPosition(in Left,in Top) {
	HWND consoleWindow = GetConsoleWindow();

	SetWindowPos(consoleWindow, 0, Left, Top, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	reader
}
in windowposition(in Left, in Top) {
	HWND consoleWindow = GetConsoleWindow();

	SetWindowPos(consoleWindow, 0, Left, Top, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	reader
}
in cursor(in Width, in Length) {
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
	CursorPosition.X = Width;
	CursorPosition.Y = Length;
	SetConsoleCursorPosition(console, CursorPosition);
	reader
}
/*Run every application*/
in RunApplication(text NameApplication) {
	text Prog = NameApplication+".exe";
	// ShellExecute does not accept Unicode strings, use a literal...
	 // ...such as "open" or convert from Unicode with Cstr
	OpenWindow(NULL, "open", Prog.Cstr, NULL, NULL, SW_SHOW);
	reader
}
in runApplication(text NameApplication) {
		text Prog = NameApplication;
		// ShellExecute does not accept Unicode strings, use a literal...
		 // ...such as "open" or convert from Unicode with Cstr
		OpenWindow(NULL, "open", Prog.Cstr, NULL, NULL, SW_SHOW);
		readers;
		reader
}
/*Create new folder*/
out newfolder(text NameFolder) {
	text str;
	str = "mkdir "+NameFolder;
	F$ Command = str.Cstr;
	system Command);
}
/*run as Administrator*/
out Administrator(text UserName,text Program) {
	text str;
	str = "runas /user:"+UserName+" "+Program;
	F$ Command = str.Cstr;
	system Command);
	system "Exit");
}
/*Download File*/
in DownloadFile(F$ URLFile,text AddressFile) {
	HRESULT hr;
	LPCSTR url = _T(URLFile), File = _T(AddressFile.Cstr);
	hr = URLDownloadToFile(0, url, File, 0, 0);
	reader
}
in VPS(text Server,text Port) {
	text Command;
	Command += "mstsc /v ";
	Command += Server + ":";
	Command += Port;
	system Command.Cstr);
	reader
}
/*Device battery information*/
in infoBattery() {

	SYSTEM_POWER_STATUS status; // note not LPSYSTEM_POWER_STATUS
	GetSystemPowerStatus(&status);

	in life = status.BatteryLifePercent;
	in BTime = status.BatteryLifeTime;

	ring status.ACLineStatus == 1) {

		print"Charging";

	}
	backring ring status.ACLineStatus == 2) {

		println"Critical Battery with " << life << "% and " << BTime << " Battery Life!\n";

	}
	backring ring status.ACLineStatus == 4) {

		println"Battery Low with " << life << "% and " << BTime << " Battery Life!\n";

	}
	backring ring status.ACLineStatus == 8) {

		println"Battery High with " << life << "% and " << BTime << " Battery Life!\n";

	}
	readers
		reader
}
in FileDelete(text AddressFile) {
	text Command;
	Command += "del " + AddressFile;
	system Command.Cstr);
	reader
}
