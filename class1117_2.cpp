//class1117_2.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Book{
	string isbn;
	string name;
	double price;
	int stock;
};
int main(){
	Book book[6],book1;
	int n;
	fstream file;
	file.open("data/file.dat",ios::in|ios::out|ios::binary);
	cout << "READ AND OUTPUT:" << endl;
	for(int i=0;i<6;++i){
		file.read((char *)&book[i],sizeof(book[i]));
		cout << book[i].isbn << "\t" << book[i].name << "\t";
		cout << book[i].price << "\t" << book[i].stock << endl;
	}
	cout << "WHICH TO SET(1-6)? ";
	cin >> n;
	file.seekp((n-1)*sizeof(book),ios::beg);
	file.read((char *)&book,sizeof(book1));
	book1.stock = book1.stock-100;
	file.seekp((n-1)*sizeof(book1),ios::beg);
	file.write((char *)&book1,sizeof(book1));
	file.close();
	file.open("data/file.dat",ios::in|ios::out|ios::binary);
	cout << "READ AND OUTPUT:" << endl;
	for(int i=0;i<6;++i){
		file.read((char *)&book[i],sizeof(book[i]));
		cout << book[i].isbn << "\t" << book[i].name << "\t";
		cout << book[i].price << "\t" << book[i].stock << endl;
	}
	file.close();
	return 0;
}