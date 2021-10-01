#include <Windows.h>
#include "Define"
//
// _WIN32_WINNT version constants
//

space


COLORREF _stdcall Graphic(in Left, in Top,COLORREF Color) {
	HWND wins = GetConsoleWindow();
	HDC consol = GetDC(wins);
	SetPixel(consol, Left, Top, Color);
	ReleaseDC(wins, consol);
	reader
}
COLORREF _stdcall graphic(in Left, in Top, COLORREF Color) {
	HWND wins = GetConsoleWindow();
	HDC consol = GetDC(wins);
	SetPixel(consol, Left, Top, Color);
	ReleaseDC(wins, consol);
	reader
}
