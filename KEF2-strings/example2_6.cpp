#include <iostream>
#include <string>

using namespace std;


int main(){
	string st1[5],st2;
	st2.clear();
	for(int i=0; i<5;i++){
		cout<<"enter a string"<<endl;
		cin>>st1[i];
		st2+=st1[i][0];
	}
	cout<<st2<<endl;
	
	
	
	
}
