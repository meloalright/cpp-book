//class1113.cpp
#include <iostream>
#include <string>
using namespace std;
class Point{
	public:
		Point(int x1,int y1):x(x1),y(y1){}
		void pDisplay(){
			cout << "Point" <<endl;
		}
	private:
		int x;
		int y;
};
class Circle:public Point{
	public:
		Circle(int x1,int y1,int r1):Point(x1,y1),r(r1){}
	private:
		int r;
};
int main(void){
	Point p1(2,3);
	Circle c1(3,5,6);
	p1.pDisplay();
	c1.pDisplay();
}