#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int power(int x,int y){
	int z;
	z=pow(x,y);
	return z;
}

int main(){
	int n1,n2,p;
	cin>>n1>>n2;
	p=power(n1,n2);
	cout<<p;
}

