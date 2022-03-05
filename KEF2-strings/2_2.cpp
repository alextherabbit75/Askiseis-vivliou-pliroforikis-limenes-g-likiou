#include <iostream>
#include <string>

using namespace std;


int main(){
	string st1[10],maxn;
	int max=0;
	
	for(int i=0;i<10;i++){
		cout<<"enter name"<<endl;
		cin>>st1[i];
		
		if(st1[i].size()>=max){

			max=st1[i].size();
			maxn=st1[i];
		}
	}
	cout<<maxn<<endl;
	
	
}
