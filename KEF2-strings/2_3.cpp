#include <iostream>
#include <string>

using namespace std;


int main(){
	string name,s;
	int place=-1;
	
	cin>>name>>s;
	
	for(int i=0;i<name.size();i++){
		if(name[i] == s[0]){
			place=i;
			i=name.size();
		}
		
	}	
	cout<<place;
}
