//class1111_2.cpp
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//a+bi
//c+di
//(a+c)+(b+d)i
class Complex{
	public:
		Complex(int rval,int ival){
			this->rval = rval;
			this->ival = ival;
		}
		friend void add(Complex co0,Complex co1);
	private:
		int rval;
		int ival;
};
void add(Complex co0,Complex co1){
	cout << "(" << co0.rval << "+" << co0.ival << "i)" << " + " << "(" << co1.rval << "+" << co1.ival << "i)";
	cout << " = " << co0.rval+co1.rval << "+" << co0.ival+co1.ival << "i" << endl;
};
int main(){
	Complex complex0(5,3);//5+3i
	Complex complex1(2,2);//2+2i
	add(complex0,complex1);
	Complex complex2(3,8);//3+8i
	Complex complex3(0,2);//2i
	add(complex2,complex3);
	return 0;
}