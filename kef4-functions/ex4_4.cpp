#include <iostream>
using namespace std;
void swap(int &y,int &x){
	int temp;
	temp=x;
	x=y;
	y=temp;
}


int main(){
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<b;
}
