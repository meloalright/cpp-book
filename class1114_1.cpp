//class1114_1.cpp
#include <iostream>
#include <string>
using namespace std;
class Person{
	public:
		Person(int i,string na,string se):id(i),name(na),sex(se){}
		void set(int i,string na,string se){
			id = i;
			name = na;
			sex = se;
		}
		void display(){
			cout << "id = "<< id << " ";
			cout << "name = "<< name << " ";
			cout << "sex = "<< sex << endl;
		}
	protected:
		int id;
		string name;
		string sex;
};

class Teacher:virtual public Person{
	public:
		Teacher(int i,string na,string se,string ti,string cl,int pa):Person(i,na,se),title(ti),classes(cl),pay(pa){
			//
		}
		void set(int i,string na,string se,string ti,string cl,int pa){
			id = i;
			name = na;
			sex = se;
			title = ti;
			classes = cl;
			pay = pa;
		}
		void display(){
			cout << "id = "<< id << " ";
			cout << "name = "<< name << " ";
			cout << "sex = "<< sex << " ";
			cout << "title = "<< title << " ";
			cout << "classes = "<< classes << " ";
			cout << "pay = "<< pay << endl;
		}
	protected:
		string title;
		string classes;
		int pay;
};

class Student:virtual public Person{
	public:
		Student(int i,string na,string se,int nu,string maj,int mar):Person(i,na,se),num(nu),major(maj),mark(mar){
			//
		}
		void set(int i,string na,string se,int nu,string maj,int mar){
			id = i;
			name = na;
			sex = se;
			num = nu;
			major = maj;
			mark = mar;
		}
		void display(){
			cout << "id = "<< id << " ";
			cout << "name = "<< name << " ";
			cout << "sex = "<< sex << " ";
			cout << "num = "<< num << " ";
			cout << "major = "<< major << " ";
			cout << "mark = "<< mark << endl;
		}
	protected:
		int num;
		string major;
		int mark;
};

class SportStudent: public Student{
	public:
		SportStudent(int i,string na,string se,int nu,string maj,int mar,string ta):Student(i,na,se,nu,maj,mar),Person(i,na,se),talent(ta){
			//
		}
		void set(int i,string na,string se,int nu,string maj,int mar,string ta){
			id = i;
			name = na;
			sex = se;
			num = nu;
			major = maj;
			mark = mar;
			talent = ta;
		}
		void display(){
			cout << "id = "<< id << " ";
			cout << "name = "<< name << " ";
			cout << "sex = "<< sex << " ";
			cout << "num = "<< num << " ";
			cout << "major = "<< major << " ";
			cout << "mark = "<< mark << " ";
			cout << "talent = " << talent << endl;
		}
	private:
		string talent;
};

int main(){
	Person pe1(1,"AMY","FAMALE");
	Teacher te1(11,"Old K","MALE","COACH","BASKETBALL",80000);
	Student st1(13,"MELO","MALE",21113,"EE",80);
	SportStudent sp1(13,"MELO","MALE",21113,"GUARD",81,"ToughSHOT");
	pe1.display();
	te1.display();
	sp1.display();
	st1.display();
	//reset
	pe1.set(1,"AMILY","FAMELE");
	te1.set(24,"KOBE","MALE","USACOACH","CHAMPION",800000);
	sp1.set(13,"MELO","MALE",21113,"BetterGuard",81,"GoodToughSHOT");
	st1.set(13,"MELO","MALE",21113,"STARTUP",930000000);
	pe1.display();
	te1.display();
	sp1.display();
	st1.display();
	return 0;
}