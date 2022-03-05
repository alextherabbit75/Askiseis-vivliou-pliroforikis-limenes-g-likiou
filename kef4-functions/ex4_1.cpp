#include<iostream>

using namespace std;

int max_num(int a,int b){
	if(a>b)
		return a;

return b;
}

int main(){
	int num1,num2;
	cin>>num1>>num2;
	cout<<max_num(num1,num2);
	
	return 0;
}
