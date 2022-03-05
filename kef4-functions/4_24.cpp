#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int min3(int &a,int &b,int &c){
	if(a<b&&a<c){
		return a;
	}else if(b<a&&b<c){
		return b;
	}else
		return c;
}

int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	cout<<min3(n1,n2,n3);
}
