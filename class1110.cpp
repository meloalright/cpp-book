//class1110.cpp
#include <iostream>
#include <string>
using namespace std;
class Array{
	public:
		Array(int n){
			len =n;
			p = new int[len];
			for(int i = 0;i < len ; ++i)
				p[i] = i;
		}
		Array(const Array &a){//本来是隐函数不定义就会在浅复制时被默认执行，需重新定义为深复制函数
			len=a.len;
			p=new int[len];
			for(int i = 0;i < len;++i)
				p[i]= a.p[i];
		}
		~Array(){
			delete []p;
		}
		void add(int k){
			for(int i = 0;i < len; ++i)
				p[i]+=k;
		}
		void display(){
			for(int i = 0;i < len;++i)
				cout << p[i] << "\t";
			cout << endl;
		}
	private:
		int *p;
		int len;
};

//对象数组
class Teacher{
	public:
		Teacher(string name,char sex,int age){
			teacName = name;
			teacSex = sex;
			teacAge = age;
		}
		void display(){
			cout << "NAME =" << teacName << "\t" << "SEX =" << teacSex << "\t";
			cout << "AGE =" << teacAge << "\t\n";
		}
	private:
		string teacName;
		char teacSex;
		int teacAge;
};

int main(){
	//深复制
	Array a1(5);
	Array a2(a1);
	cout << "a1=";
	a1.display();
	cout << "a2=";
	a2.display();
	a2.add(3);
	cout << "a1=";
	a1.display();
	cout << "a2=";
	a2.display();
	cout << "---------" << endl;
	//对象数组
	Teacher teac[3]={Teacher("Zhou",'M',35),
					Teacher("Wang",'F',42),
					Teacher("zhang",'M',56)};
	for(int i = 0;i < 3;i++)
		teac[i].display();
	//
	return 0;
}