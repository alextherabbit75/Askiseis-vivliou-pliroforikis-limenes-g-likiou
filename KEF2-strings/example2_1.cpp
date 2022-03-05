#include <iostream>
#include <string>

using namespace std;


int main(){
	string colour;
	cout<<"input a colour"<<endl;
	cin>>colour;
	if((colour=="blue")||(colour=="yellow")||(colour=="red")){
		cout<<"primary"<<endl;
	}else
		cout<<"not primary"<<endl;
}
