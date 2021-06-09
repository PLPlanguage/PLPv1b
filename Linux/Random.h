#include "Define"
#include <ctime>
#include <cstdlib>
#include <random>
space

in Random(in i){
	srand((Un)time(0));
	in s = (rand()%i)+1;
	return s;
}
in Randomize(){
	random_device rd;
	return rd();
}

