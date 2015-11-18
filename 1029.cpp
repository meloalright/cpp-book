//C++ for TsingH9
#include <iostream>
#include <string.h>
using namespace std;
/*long fact(int n);
int main(){
	int i;
	cout << "Input the i sir" << endl;
	cin >> i ;
	cout << i << "! = " << fact(i) << endl;
	cout << "THIS IS FXXKING RECURSION" <<endl;
	return 0;
}
long fact(int n){
	if(n==1||n==0){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}*/
//Hanoi
/*void hanoi(int i,char a,char b,char c);
int num=0;
int main(){
	int i;
	cout << "Input your PLATE number:" <<endl;
	cin >> i;
	cout << "ANSWER is :" << endl;
	hanoi(i,'a','b','c');
	cout << endl << "SUM = "<< num << endl;
	return 0;
}
void hanoi(int n ,char a, char b , char c ){
	if(n == 1){
		cout << a <<" to "<<c <<"\t";
		num++;
	}
	else{
		hanoi(n-1,a,c,b);
		cout <<a << " to "<<c <<'\t';
		num++;
		hanoi(n-1,b,a,c);
	}
}
*/
void exchange(int *p1,int *p2);
int main(){
	int a =6;
	int b =7;
	cout << "p1 = " << a <<endl;
	cout << "p2 = " << b <<endl;
	int *p1 =&a;
	int *p2 =&b;
	exchange(&a,&b);//==exchange(p1,p2)
	cout << "p1 = " << a <<endl;
	cout << "p2 = " << b <<endl;
	return 0;
}
void exchange(int *p1,int *p2){
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	cout <<"CHANGED" <<endl;
}