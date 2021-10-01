#include "Define"
#include <fstream>
space

/*Command Printer for print text*/
struct Printer {
public:
	//write and open file for print
	in FilePrint(text File) {
		Command += "notepad /P "+File;
		system Command.Cstr);
		reader
	}
	//your text for print 
	in TextPrint(text Text) {
		writefs printer;
			printer.open("print.txt");
			printer << Text;
			printer.close();
		system "notepad /P print.txt");
		reader
	}
	in TextPrint(text Text,text Text2) {
		writefs printer;
		printer.open("print.txt");
		printer << Text << nline << Text2;
		printer.close();
		system "notepad /P print.txt");
		reader
	}
	in TextPrint(text Text, text Text2, text Text3) {
		writefs printer;
		printer.open("print.txt");
		printer << Text << nline << Text2 << nline << Text3;
		printer.close();
		system "notepad /P print.txt");
		reader
	}
	in TextPrint(text Text, text Text2,text Text3, text Text4) {
		writefs printer;
		printer.open("print.txt");
		printer << Text << nline << Text2 << nline << Text3 << nline << Text4;
		printer.close();
		system "notepad /P print.txt");
		reader
	}
	in TextPrint(text Text, text Text2, text Text3, text Text4, text Text5) {
		writefs printer;
		printer.open("print.txt");
		printer << Text << nline << Text2 << nline << Text3 << nline << Text4 << nline << Text5;
		printer.close();
		system "notepad /P print.txt");
		reader
	}
	in TextPrint(text Text, text Text2, text Text3, text Text4, text Text5, text Text6) {
		writefs printer;
		printer.open("print.txt");
		printer << Text << nline << Text2 << nline << Text3 << nline << Text4 << nline << Text5 << nline << Text6;
		printer.close();
		system "notepad /P print.txt");
		reader
	}
private:
	text Command;
};
