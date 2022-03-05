#include <iostream>
#include <string>

using namespace std;


int main(){
	string name;
	int n=0;
	cin>>name;
	while(name!="STOP"){
		if((name[0]=='N')&&(name[name.size()-1]=='S')){
			n++;
		}
		cin>>name;
	}	
	cout<<n;
	
	
}
