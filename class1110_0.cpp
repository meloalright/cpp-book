//class1110_0.cpp
#include <iostream>
using namespace std;
class Student{
	public:
		Student(string num,string name,int cham){
			stuNum = num;
			stuName = name;
			stucham = cham;
		}
		//display重写表现this指针
		void display(){
			cout<<"THAT IS=" << stuNum << ":" << stuName <<"=" << stucham<< endl;
		}
		void total(){
			sumchampion += stucham;
		}

	private:
		string stuName;
		string stuNum;
		int stucham;
	public:
		static int sumchampion;
};
int Student::sumchampion = 0;
int main(){
	Student stu1("33","WADE",3);
	Student stu2("37","KOBE",5);
	stu1.display();
	stu2.display();
	stu1.total();
	stu2.total();
	stu2.total();//再加一次
	cout << "SUM =" << Student::sumchampion<<endl;
	return 0;
}
