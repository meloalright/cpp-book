//class1115_1.cpp
#include <iostream>
#include <string>
using namespace std;
class Complex{
	public:
		Complex(){
			real = 0;imag = 0;
		}
		Complex(double r,double i){
			real = r;imag = i;
		}
		Complex(double r){
			real = r;imag = 0;
		}
		friend Complex operator+(const Complex &c1,const Complex &c2)
		{return Complex(c1.real+c2.real,c1.imag+c2.imag);}
		friend ostream &operator<< (ostream &output,Complex &c){
			output << c.real;
			if(c.imag > 0){
				output << "+";
				output << c.imag << "i";
			}
			if(c.imag < 0){
				output << c.imag << "i";
			}
			return output;
		}
	private:
		double real;
		double imag;
};
int main(){
	Complex c1,c2(1.1,2.2),c3(2.3),c4,c5;
	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
	c4 = c2 + 3.7;
	c5 = c4 + c2;
	cout << c4 << endl;
	cout << c5 << endl;
	return 0;
}