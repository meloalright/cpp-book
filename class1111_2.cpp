//class1111_2.cpp
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Student{
	public:
		Student(int num=0,string name="0",int age=0,int a=0,int b=0,int c=0){
			this->num = num;
			this->name = name;
			this->age = age;
			this->a = a;
			this->b = b;
			this->c = c;
		}
		void set(int num,string name,int age,int a,int b,int c){
			this->num = num;
			this->name = name;
			this->age = age;
			this->a = a;
			this->b = b;
			this->c = c;
		}
		void sum(){
			cout << " SUM = " << (a+b+c)/3.0;
		}
		void top(){
			if((a>=b) && (a>=c)){
				cout << " TOP = " << a <<endl;
			}
			else if((b>=a) && (b>=c)){
				cout << " TOP = " << b <<endl;
			}
			else if((c>=b) && (c>=a)){
				cout << " TOP = " << c <<endl;
			}
			else{
				cout << " TOP = " << a <<endl;
			}
		}
	private:
		int num;
		string name;
		int age;
		int a;//a,b,c分别是三门课成绩
		int b;
		int c;
};

int main()
{
	Student stu[50];
	int num;
	string name;
	int age;
	int a;//a,b,c分别是三门课成绩
	int b;
	int c;
	for(int i=0;i <49;i++){
		int ch;
		cout << "1:Insert  2:SQL  0:Quit >> ";
		cin >> ch;
		switch(ch){
			case 1:{
				cout << "STUDENT SYSTEM" << endl;
				cout << "NUM = ";
				cin >> num;
				cout << "NAME = ";
				cin >> name;
				cout << "AGE = ";
				cin >> age;
				cout << "CLASS A = ";//课程A的成绩
				cin >> a;
				cout << "CLASS B = ";
				cin >> b;
				cout << "CLASS C = ";
				cin >> c;
				stu[i].set(num,name,age,a,b,c);
				break;
			}
			case 2:{
				i--;
				for(int j=0;j<=i;j++){
					cout << i;
					stu[j].sum();
					stu[j].top();
				}
				break;
			};	
			case 0:return 0;break;
			default:cout << "Error" << endl;
		}
	}
	return 0;
}