#include <iostream>
#include <string>

using namespace std;


int main(){
	string st1,st2;
	
	st2.clear();
	cout<<"enter string"<<endl;
	cin>>st1;
	
	for(int i=0;i<st1.size();i++){
		if((st1[i]>60)&&(st1[i]<90)){
			st2+=st1[i];
		}
	}
	if(st2.empty()){
		cout<<"no capitals"<<endl;
	}else
		cout<<st2;
	
	
	
}
