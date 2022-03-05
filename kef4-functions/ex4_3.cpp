#include<iostream>

using namespace std;

void byvalue(int x){
	x=x+1;
	cout<<x;
}
void byreference(int &y){
	y=y+1;
	cout<<y;
}

int main() {
	int num=5;
	byvalue(num);
	cout<<"number= "<<num;
	byreference(num);
	cout<<"number="<<num;
	
}
