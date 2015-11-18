//1110.cpp
#include <iostream>
using namespace std;
class Rectangle{
	public:
		Rectangle(int,int);
		Rectangle(const Rectangle &);
		void set(int,int);
		int area();
	private:
		int length;
		int width;
};
Rectangle::Rectangle(int len,int w){
	length=len;
	width=w;
}
//定义[复制构造函数]为两倍X2复制函数
Rectangle::Rectangle(const Rectangle &r){
	length=2 * r.length;
	width=2 * r.width;
}
void Rectangle::set(int len,int w){
	length=len;
	width=w;
}
int Rectangle::area(){
	return (length * width);
}
int main(){
	int m ,n;
	cout << "init m=" << endl;
	cin >> m;
	cout << "init n=" << endl;
	cin >> n;
	Rectangle rec1(m,n);
	cout << "Rec1 = " << rec1.area() << endl;
	cout << "COPY" << endl;
	Rectangle rec2 = rec1;
	cout << "Rec2 = " << rec2.area() << endl;
	return 0;
}