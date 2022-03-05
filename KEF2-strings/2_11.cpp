#include <iostream>
#include <string>

using namespace std;


int main(){
	string name,temp,first;
	
	cin>>name;
	first=name;
//	cout<<name<<endl;
	
	temp=name[0];	
	name[0]=name[name.size()-1];
	
	for(int i=1;i<name.size()-1;i++){
	temp=name[i];
	name[i]=name[name.size()-1-i];
	
	}
	if(name==first){
		cout<<"true"<<endl;
	}else
		cout<<"false";
	
}
