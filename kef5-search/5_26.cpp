#include <iostream>
#include <string>
#include <fstream>
using namespace std;





int main(){
int n,m,cntr=0;
cout<<"enter size for the 2 arrays:"<<endl;
cin>>n>>m;
int a[n],b[m];
cout<<"table 1:"<<endl;
for(int i=0;i<n;i++){
	cout<<"enter a value: ";
	cin>>a[i];
}
cout<<endl<<"table 2: "<<endl;
for(int i=0;i<m;i++){
	cout<<"enter a value";
	cin>>b[i];
}
for(int i=0;i<n;i++){
	cout<<"pos: "<<i<<endl;
	for(int j=0;j<m;j++){
		if(b[j]==a[i]){
			cntr++;
		}
	}
}

if(cntr==m){
	cout<<"all items found"<<endl;
}else
	cout<<"some not found"<<endl;
	
return 0;	
}
