//class1115_0.cpp
#include <iostream>
#include <string>
using namespace std;
class Amy{
	public:
		Amy(int id=0,int val=0){
			this->id = id;
			this->val = val;
		}
		Amy operator+(const Amy &);//重载加法运算符
		Amy operator-(const Amy &);//重载减法运算符
		void display();
	private:
		int id;
		int val;
};

Amy Amy::operator+(const Amy &i2){
	Amy i(id,val);
	i.id = id;
	i.val = val + i2.val;
	return i;
}

Amy Amy::operator-(const Amy &i2){
	Amy i(id,val);
	i.id = id;
	i.val = val - i2.val;
	return i;
}
void Amy::display(){
	cout << "ID = " << id ;
	cout << " VAL = " << val << endl;
}

int main(){
	int x = 10;
	int y = 20;
	int z = x+y;
	cout << "X = " << x;
	cout << " Y = " << y;
	cout << " Z = " << z << endl;
	Amy a1(1,13),a2(2,22);
	Amy a3,a4;
	cout << "a1: ";
	a1.display();
	cout << "a2: ";
	a2.display();
	a3 = a1 + a2; 
	cout << "a3: ";
	a3.display();
	a4 = a1 - a2;
	cout << "a4: ";
	a4.display();
	return 0;
}