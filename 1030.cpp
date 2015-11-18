//1030.cpp
#include <iostream>
#include <string.h>
using namespace std;
int main(void){
	int arr[5];
	//short takes 2 byte
	//double takes 8 byte
	//unsigned takes 4 byte
	//float takes 4 byte
	//double takes 8 byte
	//long takes 8 byte
	string str="Compiler";
	string str_1="A";
	char ch_0[5] ="acer";
	char ch_1[5] ={'A','C','E','R'};
	for(int i =0; i < 5;i++){
    	cout << &arr[i] <<endl;
	}
	cout << &str <<endl;
	cout << sizeof(str) <<endl;
	cout << &str_1 <<endl;
	cout << sizeof(str_1) <<endl;
	cout << &ch_0 <<endl;
	cout << sizeof(ch_0) <<endl;
	cout << &ch_1 <<endl;
	cout << sizeof(ch_1) <<endl;

}
