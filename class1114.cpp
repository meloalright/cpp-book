// class1114.cp
#include <iostream>
#include <string>
using namespace std;
class Jumper{
	public:
		Jumper(int nu,string na):num(nu),name(na){
			//
		}
		void display(){
			cout << "JUMPER.NUM = " << num << " NAME = " << name << endl;
		}
	protected:
		int num;
		string name;
};
class Guard :virtual public Jumper{
	public:
		Guard(int nu,string na):Jumper(nu,na){
			//
		}
		void display(){
			cout << "GUARD.NUM = " << num << " NAME = " << name << endl;
		}
	protected://保护成员可以
		//
};
class Killer:virtual public Guard{
	public:
		Killer(int nu,string na,int ch):Jumper(nu,na),Guard(nu,na),champions(ch){
			//
		}
		void display(){
			cout << "HE DEVERSE CHAMPIONS OF " << champions << endl;
		}
	protected:
		//only new datamember
		int champions;
};
class Curry:public Killer{
	public:
	Curry(int nu,string na,int ch,int tpt):Killer(nu,na,ch),Guard(nu,na),Jumper(nu,na),tpointers(tpt){
		//
	}
	void Cudisplay(){
		cout << "THAT IS MVP " << num << " " << name << " " <<  "IN 3pt = " << tpointers << " WITH CHAMPIONS = " << champions << endl;
	}
	private:
		int tpointers;
};
int main(){
	Jumper jp(24,"kobe");
	Guard gd(3,"CP3");
	Killer kl(34,"Pierce",1);
	Curry cr(30,"Curry",1,428);
	jp.display();
	gd.display();
	kl.display();
	cr.display();
	cr.Cudisplay();
	return 0;
}