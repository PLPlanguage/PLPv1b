#include "import"

_ 
text a;
in s;
in as;

ringw true){
println "#";
sent a;
ring a == "print" && sent a){
	print a;
}
backring ring a == "ls"){
	directorysystem
}
backring ring a == "texttospeech"&&sent a){
	texttospeech(a);
}
backring ring a == "echo"&&sent a){
	colorBlue
	texttospeech(a);
	print a;
	colorWhite
}
backring ring a == "clear"){
	clears
}
backring ring a == "help"){
	printf "__echo__\n");
	printf "__write__[write file]\n");
	printf "__print__\n");
	printf "__file__ [Open File]\n");
	printf "__exit__\n");
	printf "__texttospeech__\n");
}
backring ring a == "write"){ text str;
	texttospeech("write a Code");
	system "notepad Source.plp");
	system "copy Source.plp Source.cpp");

                text Command10;
	Command10 += "clang++ Source.cpp -o out.exe";
	system Command10.Cstr);

    ringf in i=0;i <= 3;i++){
    Animation("Compiling<>",200);
    Animation("Compiling||",200);
    Animation("Compiling><",200);
    }
	text Command12;
	Command12 += "out.exe";
	system Command12.Cstr);
	
	remove("Source.cpp");
}
backring ring a == "file"){
		   text File;
	text str;
	texttospeech("openFile");
	print "File PLP:";
	sent File;
	str += "copy "+File;
	str += " "+File+".cpp";
	system str.Cstr);

 	text Command5;
	Command5 += "clang++ "+File+".cpp -o "+File+".exe";
	system Command5.Cstr);
            ringf in i=0;i <= 3;i++){
            Animation("Compiling<>",200);
            Animation("Compiling||",200);
            Animation("Compiling><",200);
            }
   
	text Command2;
	Command2 += "del "+File+".cpp";
	system Command2.Cstr);
	FileOpen(File);
	colorGreen
	print "Successful Compiler";
	colorWhite

}
backring ring a == "poweroff" || a == "shutdown"){
	texttospeech("poweroff,computer");
	poweroff
}
backring ring a == "exit"){
		texttospeech("exit from Compiler");
		_Exit(0);
}
backring
	print "not Command";
}
Done
