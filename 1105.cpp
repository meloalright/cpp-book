//1105.cpp
#include <iostream>
using namespace std;
enum Singer{Avril,Bieber,Owlcity};//enum from 0,1,2,3.......OFCOURSE FROM 0 BEGIN
void switcher(Singer);
//
enum ball{red,yel,blu,whi,bla};
void outname(ball);
int main(){
	int player1,player2,player0,playern;
	//cout << player1 << "and" << player2 << endl;//不能用COUT和CIN输出输入枚举的变量值
	cout << "---SINGER PROBLEM---" << endl;
	for(player0=Avril;player0 <= Owlcity;player0++)
		for(playern=Avril;playern <= Owlcity;playern++)
			if(playern - player0 >=2){
				switcher(Singer(player0));
				cout << " MINUSED 2+ BY: ";
				switcher(Singer(playern));
				cout << endl << endl;

			}
			else{
				switcher(Singer(player0));
				cout << " - ";
				switcher(Singer(playern));
				cout << endl << endl;

			}
	cout << "---BALL PROBLEM---" <<endl;
	int ball0,ball1,ball2;
	int times=0;
	for(ball0 = red;ball0 <= bla;ball0++)
		for(ball1 = red;ball1 <= bla;ball1++)
			for(ball2 = red;ball2 <= bla;ball2++){
				if(ball0 != ball1 && ball0 != ball2 && ball1 != ball2){
					outname(ball(ball0)); 
					cout << "+" ;
					outname(ball(ball1));
					cout << "+";
					outname(ball(ball2));
					cout << endl;
					times++;
				}
			}
	cout << "TIMES = " << times <<endl;
	return 0;
};
void switcher(Singer player){
	switch(player){
		case Avril:cout << "Avril" ;break;
		case Owlcity:cout << "Owlcity";break;
		case Bieber:cout << "Bieber";break;
	}
};
void outname(ball ballname){
	switch(ballname){
		case red: cout << "RED" ;break;
		case yel: cout << "YEL" ;break;
		case blu: cout << "BLU" ;break;
		case whi: cout << "WHI" ;break;
		case bla: cout << "BLA" ;break;

	}
};
