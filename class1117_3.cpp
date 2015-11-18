//class1117_3.cpp
#include <iostream>
#include <string>
using namespace std;
void divid(int a){
	if(a>35 || a<15)
		throw -1;
}
void divid(string a){
	if(a=="")
		throw -1;
}
void check(int a){
	if(a>100 || a<0)
		throw -1;
}
void ckloop(int a){
	if(a<0)
		throw -1;
}
void ckn(int a){
	if(a == 0)
		throw 0;
}
int main(){
	int nu;
	string na;
	int ag;
	int mk;
	int n;
	cout << "n = ";
	int sum = 0;
	try{
		cin >> n;
		ckloop(n);
		ckn(n);
		int i =0;
		do{
			cout << "NUM = ";
			cin >> nu;
			cout << "NAME = ";
			cin >> na;
			divid(na);
			cout << "AGE = ";
			cin >>ag;
			divid(ag);
			cout << "MARK = ";
			cin >>mk;
			check(mk);
			sum += mk;
			i++;
		}
		while(i < n);
		cout << "OK" << endl;
	}
	catch(int e){
		if(e == -1)
			cout << "CIN ERROR" << endl;
		else if(e == 0)
			cout << "NO 0" << endl;
		else
			cout << "SOME ERROR" << endl;	
	}
	cout << "AVE = " << sum/n << endl;
	return 0;
}