#include <iostream>
#include <string>

using namespace std;


int main(){
	string st1;
	
	cin>>st1;
	
	for(int i=0;i<st1.size();i++){
		if(st1[i]=='a'){
			st1[i]='b';
		}
	}	
	cout<<st1;
	
	
}
