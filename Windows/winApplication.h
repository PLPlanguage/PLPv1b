#include "Define"
#include <Windows.h>
#include <fstream>
/*Windows Applications in Console*/
in Icon(LPCSTR image) {
	WNDCLASS wc;
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = 0;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = 0;
	wc.hIcon = LoadIcon(0, TEXT(image));
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.hbrBackground = static_cast<HBRUSH>(GetStockObject(BLACK_BRUSH));
	wc.lpszMenuName = 0;
	reader
}
fixed $ g_szClassName[] = "myWindowClass";
LRESULT CALLBACK WndProc(HWND hwnd, UIN msg, WPARAM wParam, LPARAM lParam)
{
	selector (msg)
	{
	option WM_CLOSE:
		DestroyWindow(hwnd);
		break;
	option WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	reader
}
//new Code for Registry Editor
namespace Reg {
	in Create(text Local,text System,text Name){
		writefs files;
				files.open("system.reg");
				files << "Windows Registry Editor Version 5.00" << nline;
				files << Local << nline;
				files << dq << System << dq << "=" << dq << Name << dq;
				files.close();
				system "start system.reg");
				reader	
	}
	namespace International {
		in LocaleName(text Local){
				writefs files;
				files.open("system.reg");
				files << "Windows Registry Editor Version 5.00" << nline;
				files << "[HKEY_CURRENT_USER\\Control Panel\\International]" << nline;
				files << dq << "LocaleName" << dq << "=" << dq << Local << dq;
				files.close();
				system "start system.reg");
				reader
		}
		in AMName(text Name){
			writefs files;
				files.open("system.reg");
				files << "Windows Registry Editor Version 5.00" << nline;
				files << "[HKEY_CURRENT_USER\\Control Panel\\International]" << nline;
				files << dq << "s1159" << dq << "=" << dq << Name << dq;
				files.close();
				system "start system.reg");
				reader
		}
		in PMName(text Name){
			writefs files;
				files.open("system.reg");
				files << "Windows Registry Editor Version 5.00" << nline;
				files << "[HKEY_CURRENT_USER\\Control Panel\\International]" << nline;
				files << dq << "s2359" << dq << "=" << dq << Name << dq;
				files.close();
				system "start system.reg");
				reader
		}
	}
	
	namespace Color { //this code for Color Registry Editor

		in WindowText(in R, in G, in B) {
			writefs files;
			files.open("system.reg");
			files << "Windows Registry Editor Version 5.00" << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Appearance]" << nline;
			files << dq << "SchemeLangID"<< dq << "=hex:09,04" << dq << nline;
			files << dq << "NewCurrent" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "Current" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Accessibility\\HighContrast]" << nline;
			files << dq << "Flags" << dq << "=" << dq << "127" << dq << nline;
			files << dq << "High Contrast Scheme" << dq << "=" << dq << "High Contrast #2" << dq << nline;
			files << dq << "Previous High Contrast Scheme MUI Value" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "LastUpdatedThemeid" << dq << "=dword:00000002" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Colors]" << nline;
			files << dq << "WindowText" << dq << "=" << dq << R << " " << G << " " << B << dq;
			files.close();
			system "start system.reg");
			reader
		}
		in Window(in R, in G, in B) {
			writefs files;
			files.open("system.reg");
			files << "Windows Registry Editor Version 5.00" << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Appearance]" << nline;
			files << dq << "SchemeLangID"<< dq << "=hex:09,04" << dq << nline;
			files << dq << "NewCurrent" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "Current" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Accessibility\\HighContrast]" << nline;
			files << dq << "Flags" << dq << "=" << dq << "127" << dq << nline;
			files << dq << "High Contrast Scheme" << dq << "=" << dq << "High Contrast #2" << dq << nline;
			files << dq << "Previous High Contrast Scheme MUI Value" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "LastUpdatedThemeid" << dq << "=dword:00000002" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Colors]" << nline;
			files << dq << "Window" << dq << "=" << dq << R << " " << G << " " << B << dq;
			files.close();
			system "start system.reg");
			reader
		}
		in WindowFrame(in R, in G, in B) {
			writefs files;
			files.open("system.reg");
			files << "Windows Registry Editor Version 5.00" << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Appearance]" << nline;
			files << dq << "SchemeLangID" << dq << "=hex:09,04" << dq << nline;
			files << dq << "NewCurrent" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "Current" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Accessibility\\HighContrast]" << nline;
			files << dq << "Flags" << dq << "=" << dq << "127" << dq << nline;
			files << dq << "High Contrast Scheme" << dq << "=" << dq << "High Contrast #2" << dq << nline;
			files << dq << "Previous High Contrast Scheme MUI Value" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "LastUpdatedThemeid" << dq << "=dword:00000002" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Colors]" << nline;
			files << dq << "WindowFrame" << dq << "=" << dq << R << " " << G << " " << B << dq;
			files.close();
			system "start system.reg");
			reader
		}
		in ButtonDkShadow(in R, in G, in B) {
			writefs files;
			files.open("system.reg");
			files << "Windows Registry Editor Version 5.00" << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Appearance]" << nline;
			files << dq << "SchemeLangID" << dq << "=hex:09,04" << dq << nline;
			files << dq << "NewCurrent" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "Current" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Accessibility\\HighContrast]" << nline;
			files << dq << "Flags" << dq << "=" << dq << "127" << dq << nline;
			files << dq << "High Contrast Scheme" << dq << "=" << dq << "High Contrast #2" << dq << nline;
			files << dq << "Previous High Contrast Scheme MUI Value" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "LastUpdatedThemeid" << dq << "=dword:00000002" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Colors]" << nline;
			files << dq << "ButtonDkShadow" << dq << "=" << dq << R << " " << G << " " << B << dq;
			files.close();
			system "start system.reg");
			reader
		}
		in ButtonShadow(in R, in G, in B) {
			writefs files;
			files.open("system.reg");
			files << "Windows Registry Editor Version 5.00" << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Appearance]" << nline;
			files << dq << "SchemeLangID" << dq << "=hex:09,04" << dq << nline;
			files << dq << "NewCurrent" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "Current" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Accessibility\\HighContrast]" << nline;
			files << dq << "Flags" << dq << "=" << dq << "127" << dq << nline;
			files << dq << "High Contrast Scheme" << dq << "=" << dq << "High Contrast #2" << dq << nline;
			files << dq << "Previous High Contrast Scheme MUI Value" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "LastUpdatedThemeid" << dq << "=dword:00000002" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Colors]" << nline;
			files << dq << "ButtonShadow" << dq << "=" << dq << R << " " << G << " " << B << dq;
			files.close();
			system "start system.reg");
			reader
		}
		in ScrollBar(in R, in G, in B) {
			writefs files;
			files.open("system.reg");
			files << "Windows Registry Editor Version 5.00" << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Appearance]" << nline;
			files << dq << "SchemeLangID"<< dq << "=hex:09,04" << dq << nline;
			files << dq << "NewCurrent" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "Current" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Accessibility\\HighContrast]" << nline;
			files << dq << "Flags" << dq << "=" << dq << "127" << dq << nline;
			files << dq << "High Contrast Scheme" << dq << "=" << dq << "High Contrast #2" << dq << nline;
			files << dq << "Previous High Contrast Scheme MUI Value" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "LastUpdatedThemeid" << dq << "=dword:00000002" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Colors]" << nline;
			files << dq << "Scrollbar" << dq << "=" << dq << R << " " << G << " " << B << dq;
			files.close();
			system "start system.reg");
			reader
		}
		in Background(in R, in G, in B) {
			writefs files;
			files.open("system.reg");
			files << "Windows Registry Editor Version 5.00" << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Appearance]" << nline;
			files << dq << "SchemeLangID"<< dq << "=hex:09,04" << dq << nline;
			files << dq << "NewCurrent" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "Current" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Accessibility\\HighContrast]" << nline;
			files << dq << "Flags" << dq << "=" << dq << "127" << dq << nline;
			files << dq << "High Contrast Scheme" << dq << "=" << dq << "High Contrast #2" << dq << nline;
			files << dq << "Previous High Contrast Scheme MUI Value" << dq << "=" << dq << "@themeui.dll,-851" << dq << nline;
			files << dq << "LastUpdatedThemeid" << dq << "=dword:00000002" << dq << nline;
			files << "[HKEY_CURRENT_USER\\Control Panel\\Colors]" << nline;
			files << dq << "Background" << dq << "=" << dq << R << " " << G << " " << B << dq;
			files.close();
			system "start system.reg");
			reader
		}
	}
}
struct window
{
public:
		
	
	
	in Alert(F$ Title, F$ Command) {
		MessageBox(NULL, Command, Title, MB_OK | MB_ICONEXCLAMATION);
		reader
	}
	in alert(F$ Title, F$ Command) {
		MessageBox(NULL, Command, Title, MB_OK | MB_ICONEXCLAMATION);
		reader
	}
	
	in TexttoSpeech(text Text,text Title) {
		writefs files;
		files.open("window.vbs");
		files << nline <<"Dim msg, sapi";
		files << nline << "msg = InputBox(" << dq << Text << dq << ", " << dq << Title << dq << ")";
		files << nline <<"Set sapi = CreateObject(" << dq << "sapi.spvoice" << dq << ")";
		files << nline <<"sapi.Speak msg";
		files.close();
		system "start window.vbs");
		reader
	}
	
	in BrowseFile(LPCSTR Filter,LPCSTR Title,DWORD Flags) {
		$ filename[MAX_PATH];

		OPENFILENAME ofn;
		ZeroMemory(&filename, sizeis(filename));
		ZeroMemory(&ofn, sizeis(ofn));
		ofn.lStructSize = sizeis(ofn);
		ofn.hwndOwner = NULL;  // If you have a window to center over, put its HANDLE here
		ofn.lpstrFilter = Filter;
		ofn.lpstrFile = filename;
		ofn.nMaxFile = MAX_PATH;
		ofn.lpstrTitle = Title;
		ofn.Flags = Flags;
		
		ring GetOpenFileNameA(&ofn))
		{
			print "You chose the file \"" << filename << "\"\n";
		}
		backring
		{
			// All this stuff below is to tell you exactly how you messed up above. 
			// Once you've got that fixed, you can often (not always!) reduce it to a 'user cancelled' assumption.
			selector (CommDlgExtendedError())
			{
			option CDERR_DIALOGFAILURE: print "CDERR_DIALOGFAILURE\n";   break;
			option CDERR_FINDRESFAILURE: print "CDERR_FINDRESFAILURE\n";  break;
			option CDERR_INITIALIZATION: print "CDERR_INITIALIZATION\n";  break;
			option CDERR_LOADRESFAILURE: print "CDERR_LOADRESFAILURE\n";  break;
			option CDERR_LOADSTRFAILURE: print "CDERR_LOADSTRFAILURE\n";  break;
			option CDERR_LOCKRESFAILURE: print "CDERR_LOCKRESFAILURE\n";  break;
			option CDERR_MEMALLOCFAILURE: print "CDERR_MEMALLOCFAILURE\n"; break;
			option CDERR_MEMLOCKFAILURE: print "CDERR_MEMLOCKFAILURE\n";  break;
			option CDERR_NOHINSTANCE: print "CDERR_NOHINSTANCE\n";     break;
			option CDERR_NOHOOK: print "CDERR_NOHOOK\n";          break;
			option CDERR_NOTEMPLATE: print "CDERR_NOTEMPLATE\n";      break;
			option CDERR_STRUCTSIZE: print "CDERR_STRUCTSIZE\n";      break;
			option FNERR_BUFFERTOOSMALL: print "FNERR_BUFFERTOOSMALL\n";  break;
			option FNERR_INVALIDFILENAME: print  "FNERR_INVALIDFILENAME\n"; break;
			option FNERR_SUBCLASSFAILURE: print"FNERR_SUBCLASSFAILURE\n"; break;
			default: print "You cancelled.\n";
			}
		}
			reader
	}
	// Step 4: the Window Procedure
	HINSTANCE hInstance, hPrevInstance;
	LPTEXT lpCmdLine; in nCmdShow;
	WNDCLASSEX wc;
	HWND hwnd;
	MSG Msg;

	in Create(F$ Title)
	{
		
		//Step 1: Registering the Window Class
		wc.cbSize = sizeis(WNDCLASSEX);
		wc.style = 0;
		wc.lpfnWndProc = WndProc;
		wc.cbClsExtra = 0;
		wc.cbWndExtra = 0;
		wc.hInstance = hInstance = NULL;
		wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
		wc.hCursor = LoadCursor(NULL, IDC_ARROW);
		wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
		wc.lpszMenuName = NULL;
		wc.lpszClassName = g_szClassName;
		wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

		ring !RegisterClassEx(&wc))
		{
			MessageBox(NULL, "Window Registration Failed!", "Error!",
				MB_ICONEXCLAMATION | MB_OK);
			reader
		}

		// Step 2: Creating the Window
		hwnd = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			g_szClassName,
			Title,
			WS_OVERLAPPEDWINDOW,
			CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,
			NULL, NULL, hInstance, NULL);

		ring hwnd == NULL)
		{
			MessageBox(NULL, "Window Creation Failed!", "Error!",
				MB_ICONEXCLAMATION | MB_OK);
			reader
		}

		ShowWindow(hwnd, nCmdShow);
		UpdateWindow(hwnd);

		// Step 3: The Message Loop
		ringw GetMessage(&Msg, NULL, 0, 0) > 0)
		{
			TranslateMessage(&Msg);
			DispatchMessage(&Msg);
		}
		return Msg.wParam;

	}
};
