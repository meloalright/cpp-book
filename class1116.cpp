//class1116.cpp
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/*class Kobe{
public:
	Kobe(int i){
		this->i = i;
	}
	void display(){
		cout << "Kobe = " << i << endl;
	}
protected:
	int i;
};
class Wade:public Kobe{
public:
	Wade(int i):Kobe(i){
		this->i = i;
	}
	virtual void display(){
		cout << "Wade = " << i <<endl;
	}
};
int main(){
	Kobe k1(24);
	Wade w1(3);
	Kobe *p = &k1;
	Wade *q = &w1;
	p->display();
	q->display();
	p = &w1;
	p->display();
	return 0;
}*/
class Shape{
public:
	Shape(int a){this->a = a;};
	double S();
	int C();
protected:
	int a;//反正是一个长度
};
class Circle:public Shape{
public:
	Circle(int a):Shape(a){};
	virtual double S(){
		return 3.14*a*a;
	}
	virtual int C(){
		return 2*3.14*a;
	}
};
class Square:public Shape{
public:
	Square(int a):Shape(a){};
	virtual double S(){
		return a*a;
	}
	virtual int C(){
		return 4*a;
	}
};
class Rect:public Shape{
public:
	Rect(int a,int a2):Shape(a),b(a2){};
	virtual double S(){
		return a*b;
	}
	virtual int C(){
		return 2*(a+b);
	}
protected:
	int b;
};
class Tri:public Rect{
public:
	Tri(int a,int a2,int a3):Rect(a,a2),c(a3){};
	virtual double S(){
		double p = (a+b+c)*0.5;
		double result = sqrt(p*(p-a)*(p-b)*(p-c));
		return result;
	}
	virtual int C(){
		return a+b+c;
	}
private:
	int c;
};
int main(){
	Circle c1(10);
	Square sq1(10);
	Rect re1(10,20);
	Tri tr1(20,20,20);
	cout << c1.S() << endl;
	cout << c1.C() << endl;
	cout << sq1.S() << endl;
	cout << sq1.C() << endl;
	cout << re1.S() << endl;
	cout << re1.C() << endl;
	cout << tr1.S() << endl;
	cout << tr1.C() << endl;
	return 0;
	//数学:很简单同等周长面积最大的是圆，同等面积周长最大的是三角形
}