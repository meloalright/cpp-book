//class1117_1.cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	char ch='A';
	cout.put('A');//A
	cout.put(ch);//A
	cout.put(65) << endl;//A
	cout << hex << showbase << 65 << endl << dec;//101(8)=65(10)
	int a = 33;
	cout << showpos << a << endl;//
	cout << uppercase << hex << showbase << a << endl;
	double b = 1234567;
	cout << noshowpos << dec << scientific << b << endl;
	cout.setf(ios::showpos);
	cout << b << endl;
	return 0;
}
//OUTPUT=
//AAA
//0x41
//+33
//0X21
//1.234567E+06
//+1.234567E+06