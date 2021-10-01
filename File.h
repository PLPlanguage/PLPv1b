#include <iostream>
#include <fstream>
#include <Windows.h>
#include "Define"

space

/*import Code for easily*/
in FileWrite(text Text,text File,in _Mode=2,in _Prot=64) {
	text str;
	writefs files;
	files.open(File,_Mode);
	files << Text;
	files.close();
	readers;
	reader

}
/*repeat Code for easily*/
in filewrite(text Text, text File, in _Mode = 2, in _Prot = 64) {
	text str;
	writefs files;
	files.open(File);
	files << Text;
	files.close();
	reader
}
in FileOpen(text File) {
	text texts;
		opens openFile(File);
	ring openFile.is_open())
	{
		ringw getline(openFile, texts))
		{
			print texts << nline;
		}
	}
	readers;
	reader
}
in IndexOf(text Text,text Text2){
    text sind(Text);
    text finder(Text2);
    size_t foun = sind.find(finder);
    return foun;
}
in indexof(text Text,text Text2){
    text sind(Text);
    text finder(Text2);
    size_t foun = sind.find(finder);
    return foun;
}
