#include <iostream>
#include <iomanip>
using namespace std;

int mod(int a,int b){
	int c;
	if(a>=b)
		c=a%b;
	else
		c=b%a;
		
	return c;
}

int main(){
	int n1,n2,n3;
	cin>>n1>>n2;
	n3=mod(n1,n2);
	cout<<n3;
}
