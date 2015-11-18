//1104.cpp
#include<iostream>
#include<string>
using namespace std;
struct Book{
	string name;
	double price;
	int stock;
};
const int N = 3;
void sort(Book bk[],int len);
void display(Book bk[],int len);
int main(){
	bool funder=0;
	string bookName;
	Book * pb,book2[3] ={{"DIGITALSIGNAL",29.00,5},
						{"C++PROJECT",25.00,2},
						{"COMUNICATION",28.00,6}};
	pb = book2;
	/*cout<<"INPUT the BOOKNAME:";
	cin >> bookName;
	for(int i = 0;i < 5;i++ ,pb++)
		if(pb->name==bookName){
			cout << "NAME IS " <<pb->name << endl;
			cout << "PRICE IS " << pb->price << endl;
			cout << "STOCK IS " << PB->stock << endl;
			funder=1;
		}

	if (funder==0)
		cout<< "NO SUCH BOOK" << endl;
	*/
	cout << "Show in sort of STOCK:"<<endl;
	sort(book2,N);
	display(book2,N);
	return 0;
}
void sort(Book *p,int len){
	for(int i = 0;i <len-1;++i)
		for(int j=0;j<len-1;++j)
			if((p+j)->stock<(p+j+1)->stock){
				Book temp;
				temp= *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
}
void display(Book *p,int len){
	cout << "BOOKNAME\tCOST\tSTOCK" <<endl;
	for(int i=0;i <len;++i){
		cout<< (p+i)->name << "\t" << (p+i)->price << "\t" << (p+i)->stock <<endl;
	}
}