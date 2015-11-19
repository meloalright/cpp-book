//1102.cpp
#include <iostream>
using namespace std;
int add(int x,int y);
int minuse(int x, int y);
int multi(int x ,int y);
int divide(int x,int y);
void comput(int x,int y,int(*fp)(int ,int));
int main(void){
	/*int num;
	char *p;
	cout << "INPUT THE NUM OF SINGER"<< endl;
	cin >> num;
	p = new char[num];
	cout << p <<endl;
	cout << "INPUT THE SINGER" << endl;
	for(int i=0;i<num-1;i++){
		cin >> p[i];
	}
	cout << "SINGER = "<< p  << endl;
	delete []p;
	p = NULL;
    int a , b;
    int (*fp)(int,int);
    fp = add;
    cout << "INPUT 2 VARIABILITY:" << endl;
    cin >> a >> b;
    cout << "a+b=" << add(a,b) << endl;
    cout << "a+b=" << (*fp)(a,b) << endl;*/
    int a,b;
    char c;
    cout << "INPUT a char b (eg:3+5):" <<endl;
    cin >> a >> c >> b;
    switch(c){
    	case '+':
    	cout<<a<<c<<b<<"=";
    	comput(a,b,add);
    	break;

    	case '-':
    	cout<<a<<c<<b<<"=";
    	comput(a,b,minuse);
    	break;

    	case '*':
    	cout<<a<<c<<b<<"=";
    	comput(a,b,multi);
    	break;
   
    	case '/':
    	cout<<a<<c<<b<<"=";
    	comput(a,b,divide);
    	break;
    }

}
int add(int x,int y){
	return x+y;
}
int minuse(int x,int y){
	return x-y;
}
int multi(int x,int y){
	return x*y;
}
int divide(int x,int y){
	return x/y;
}
void comput(int x,int y,int(*fp)(int ,int)){
	cout<< (*fp)(x,y) << endl;
}
