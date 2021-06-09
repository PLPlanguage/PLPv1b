#include <iostream>
#include <string>
#include "Define"
space

/*Write for print*/
out Write(text STR) {
	print STR << " ";
	readers;
}

out Write(text STR, text STR2){
	print STR << STR2;
	readers;
}
/*Counter for Write*/
in Write(text STR, in INT, text STR3) {
	print STR << INT << STR3;
	readers;
		reader
}
in write(in INT, text STR, text STR3) {
	print INT << STR << STR3;
	readerf;
		reader
}
in Write(text STR, text STR2, in INT) {
	print STR << STR2 << INT;
	
	reader
}
out write(text STR, text STR2, text STR3) {
	print STR << STR2 << STR3;
	readers;
}
out Write(text STR, text STR2, text STR3) {
	PRINT STR << STR2 << STR3;
	readers;
}
out Write(text STR, text STR2, text STR3, text STR4) {
	PRINT STR << STR2 << STR3 << STR4;
	readers;
}
out write(text STR, text STR2, text STR3, text STR4) {
	print STR << STR2 << STR3 << STR4;
	readers;
}
/*Number for int*/
in Write(in INT) {
	print INT;
	readerf;
		reader
}
in Write(text STR, in INT) {
	print  STR << " " << INT;
	readerf;
		reader
}
in Write(in INT, text STR) {
	print INT << " " << INT;
	readerf;
		reader
}

/*Repeat Code for Easily*/
out write(text STR) {
	print STR << " ";
}

out write(text STR, text STR2) {
	print STR << nline << STR2;
		
}

in write(in INT) {
	print INT;
	readerf;
		reader
}

in write(text STR, in INT) {
	print STR << " " << INT;
	readerf;
		reader
}
in write(in INT, text STR) {
	print INT << " " << INT;
	readerf;
		reader
}
/*This Code for Every Number*/

in write(text STR, dec8 Double) {
	print STR << " " << Double;
	readerf;
		reader
}
in Write(dec8 Double, dec8 Double2) {
	print Double << " " << Double2;
	readerf;
	reader
}
