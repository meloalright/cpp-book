//class1111_0.cpp
#include <iostream>
#include <string>
using namespace std;
//Phil 用于友元类
//Kobe Gasol用于函数友元函数
class Phil;
class Kobe;
class Gasol{
	public:
		Gasol(int point){
			this->point = point;
			cout << "Gasol with " << point << " pointer !!" << endl;
		}
		void singleplay(){
			cout << "Gasol singleplay with " << point << " pointer bang!!! WHAT A SHOT" << endl;
		}
		friend void pass(Kobe &ko,Gasol &ga);
		friend class Phil;

	private:
		int point;//得几分
};

class Kobe{
	public:
		Kobe(string way,int point){
			this->way = way;
			this->point = point;
			cout << "Kobe "<< way << " for " << point << " bang!!! and FAULLLL" << endl;
		}
		void singleplay(){
			cout << "Kobe singleplay " << point << " pointer bang!!! WHAT A SHOT" << endl;
		}
		friend void pass(Kobe &ko,Gasol &ga);
		friend class Phil;

	private:
		string way;//可以是突破drive through 可以是后仰fade away
		int point;//得几分
};
void pass(Kobe &ko, Gasol &ga){
	cout << "Kobe " << ko.way <<" and Gasol with " << ga.point << " bang!!! and FAULLLL" << endl;
	//蜗壳使用Kobe.attack方式进攻然后助攻家嫂得到point分
}

//友元类Phil可以访问Kobe和Gasol的私有成员
class Phil{
	public:
		Phil(string word){
			this->word = word;
		}
		void madKobe(Kobe &ko){
			cout << "Phil is mad for the Kobe's " << ko.way << " with \""<< word << "\"" << endl;

		}
		void madGasol(Gasol &ga){
			cout << "Phil is mad for the Gasol's " << ga.point << " with \""<< word << "\"" << endl;

		}
	private:
		string word;

};
//main
int main(){
	Gasol ga1(3);
	Gasol ga2(2);
	Kobe ko1("Divethrough",3);
	Kobe ko2("Fadeaway",4);
	ga1.singleplay();
	ga2.singleplay();
	ko2.singleplay();
	pass(ko2,ga2);
	pass(ko1,ga2);
	pass(ko2,ga1);
	pass(ko1,ga1);
	Phil ph0("Hey..");
	ph0.madKobe(ko2);
	ph0.madGasol(ga2);
	return 0;
}
/*OUTPUT
Gasol with 3 pointer !!
Gasol with 2 pointer !!
Kobe Divethrough for 3 bang!!! and FAULLLL
Kobe Fadeaway for 4 bang!!! and FAULLLL
Gasol singleplay with 3 pointer bang!!! WHAT A SHOT
Gasol singleplay with 2 pointer bang!!! WHAT A SHOT
Kobe singleplay 4 pointer bang!!! WHAT A SHOT
Kobe Fadeaway and Gasol with 2 bang!!! and FAULLLL
Kobe Divethrough and Gasol with 2 bang!!! and FAULLLL
Kobe Fadeaway and Gasol with 3 bang!!! and FAULLLL
Kobe Divethrough and Gasol with 3 bang!!! and FAULLLL
Phil is mad for the Kobe's Fadeaway with "Hey.."
Phil is mad for the Gasol's 2 with "Hey.."
*/
