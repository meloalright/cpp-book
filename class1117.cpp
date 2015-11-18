//class1117.cpp
#include <iostream>
using namespace std;
struct Circle
{
	double abs;
	double ord;
	double r;
};
template<class T>
T maximum(T x,T y);
Circle maximum(Circle x,Circle y);
int main(){
	int ia = 5,ib = 10;
	Circle c1={2.4,5.8,5},c2 ={1.2,3.1,12},c3;
	cout << "MAXIMUM(5,10) = " << maximum(ia,ib) << endl;
	c3 = maximum(c1,c2);
	cout << "MAXIMUM(c1,c2) = " << c3.r << endl;
	return 0;
}
template <class T>
T maximum(T x,T y){
	T max;
	if(x>=y)max = x;
	else max=y;
	return max;
}
Circle maximum(Circle x,Circle y){
	Circle c;
	if (x.r>=y.r) c = x;
	else c = y;
	return c;
}