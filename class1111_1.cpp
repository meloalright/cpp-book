//class1111_1.cpp
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Triangle{
	public:
		Triangle(double a1,double a2,double a3){
			if(((a1+a2)>a3) && ((a1+a3)>a2) && ((a2+a3)>a1)){
				this->a1 = a1;
				this->a2 = a2;
				this->a3 = a3;
			}
			else
				cout << "CAN NOT EXIST" << endl;
		}

		void set(double a1,double a2,double a3){
			if(((a1+a2)>a3) && ((a1+a3)>a2) && ((a2+a3)>a1)){
				this->a1 = a1;
				this->a2 = a2;
				this->a3 = a3;
			}
			else
				cout << "CAN NOT EXIST" << endl;
		}

		void C(){
			cout << "C = " << a1+a2+a3 << endl;
		}
		void S(){
			double p = (a1+a2+a3)/2;
			double s = sqrt(p*(p-a1)*(p-a2)*(p-a3));
			cout << "S = " << s << endl;
		}
	private:
		double a1;
		double a2;
		double a3;
};

int main(){
	int ch;
	double a,b,c;
	Triangle tri0(3,4,5);
	cout << "This is Triangle(3,4,5)" << endl;
	for(int i = 0;i >=0;i++){//这里如果不Quit则无限次执行
		cout << "0:Set  1:C  2:S  3:Quit >> ";
		cin >> ch;
		switch(ch){
			case 0:{
				cout << "INPUT the a= ";
				cin >> a;
				cout << "INPUT the b= ";
				cin >> b;
				cout << "INPUT the c= ";
				cin >> c;
				tri0.set(a,b,c);
				break;
			}
			case 1:tri0.C();break;
			case 2:tri0.S();break;
			case 3:return 0;
			default:cout << "Error"<<endl;
		}
	}
	return 0;
}