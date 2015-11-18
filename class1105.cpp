//class1105.cpp
#include <iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle();
		Rectangle(int);
		Rectangle(int,int);
		void set(int,int);
		int area();
		~Rectangle();
	private:
		int length;
		int width;
		int *p;
};
//3个重载
Rectangle::Rectangle(){
	cout << "Ask for memory space" <<endl;
	p = new int;
	length = 1;
	width = 1;
}
Rectangle::Rectangle(int len){
	cout << "Ask for memory space" <<endl;
	p = new int;
	length = width = len;
}
Rectangle::Rectangle(int len,int w){
	cout << "Ask for memory space" <<endl;
	p = new int;
	length = len;
	width = w;
}
//析构
Rectangle::~Rectangle(){
	cout << "~" << endl;
	delete p;
}

void Rectangle::set(int len,int w){
	length = len;
	width = w;
}
int Rectangle::area(){
	return (length * width);
}
int main(){
	Rectangle rec1;
	cout << "AREA = " << rec1.area() << endl;
	Rectangle rec2(7);
	cout << "AREA = " << rec2.area() << endl;
	Rectangle rec3(10,20);
	cout << "AREA = " << rec3.area() << endl;
	return 0;
}