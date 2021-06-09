#include <cmath>
#include <iostream>
#include "Define"
space

//this code for math find C and c

template <class tangent>
tangent Tan(tangent a) {
	return tan(a);
}
template <class consinef>
consinef Cosf(consinef a) {
	return cosf(a);
}
template <class tangentf>
tangentf Tanf(tangentf num) {
	return tanf(num);
}
template <class cosine>
cosine Cos(cosine a) {
	return cos(a);
}
template <class plus>
plus Plus(plus Var1, plus Var2) {
	return Plus(Var1, Var2);
}
template <class multiply>
multiply Multiply(multiply Var1,multiply Var2) {
	return Multiply(Var1, Var2);
}
template <class sinus>
sinus Sin(sinus num) {
	return sin(num);
}
template <class power>
power Pow(power Num1, power Num2) {
	return pow(Num1, Num2);
}
template <class sqrts>
sqrts SQRT(sqrts power2) {
	return sqrt(power2);
}
in factoral(in x){
	ring x == 1){
		return 1;
	}
	backring{
		return x * factoral(x-1);
	}
}
