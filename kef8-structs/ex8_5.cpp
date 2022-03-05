#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct book{
	string title;
	string author;
	string isbn;
	int quantity;
};

void readbook(book &vivl){
	getline(cin, vivl.title);
	getline(cin, vivl.author);
	getline(cin, vivl.isbn);
	cin>>vivl.quantity;
}

void printbook(book vivl){
	cout<<vivl.title<<endl<<vivl.author<<endl<<vivl.isbn<<endl<<vivl.quantity<<endl;
}

int main(){
	book bk1;
	readbook(bk1);
	printbook(bk1);
	
return 0;
}
