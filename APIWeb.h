#include "Define"
#include <Windows.h>
space

/*Show place in maps*/
in MapsLocation(text Place) {
	text str;

	str = "http://www.google.com/maps/search/" + Place;
	F$ Command = str.Cstr;
	OpenWindow(0, 0, Command, 0, 0, SW_SHOW);
	reader
}
/*Search text in the web*/

in searchweb(text WhatYourSearch) {
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
	str = "https://www.google.com/search?q=" + WhatYourSearch;
	F$ Command = str.Cstr;
	OpenWindow(0, 0, Command, 0, 0, SW_SHOW);
	print"You searched " + WhatYourSearch;
	readers
		reader
}
in SearchWeb(text WhatYourSearch) {
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
	str = "https://www.google.com/search?q=" + WhatYourSearch;
	F$ Command = str.Cstr;
	OpenWindow(0, 0, Command, 0, 0, SW_SHOW);
	print"You searched " + WhatYourSearch;
	readers
		reader
}
