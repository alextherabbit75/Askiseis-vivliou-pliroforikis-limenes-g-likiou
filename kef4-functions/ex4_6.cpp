#include <iostream>
using namespace std;

int check(int a,int &b){
	b+=2;
		if(a>b)
			return a;
	return a+b;
}

int main(){
	int x=5,y=3;
	if(x>y)
		cout<<check(x,y)<<endl;
	else
		cout<<check(y,x)<<endl;	
		
	cout<<x<<" "<<y<<endl;
}
