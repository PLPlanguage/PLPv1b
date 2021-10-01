#include <iostream>
#include <fstream>
#include "Define"

space

in FileWrite(text Texts,text Files){
	writefs file;
	file.open(Files);
	file << Texts;
	file.close();
	reader
}

in filewrite(text Texts,text Files){
	
	writefs file;
	file.open(Files);
	file << Texts;
	file.close();
	reader
}
in FileOpen(text Filesa){
	text txt;
	opens openFile(Filesa);
	ring openFile.is_open()){
		ringw getline(openFile,txt)){
				print txt << nline;
		}
	}
	reader
}
in fileopen(text Filesa){
	text txt;
	opens openFile(Filesa);
	ring openFile.is_open()){
		ringw getline(openFile,txt)){
			print txt << nline;
		}
	}
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

