#include<iostream>

using namespace std;

int paragontiko(int a){
	int ans=1;
	for(int i=1;i<=a;i++){
		ans*=1;
	}
return ans;
}

int main(){
	int x,y,z;
	cin>>y>>z;
	x=paragontiko(y)+paragontiko(z);
	cout<<x;
	return 0;
	
	
}
