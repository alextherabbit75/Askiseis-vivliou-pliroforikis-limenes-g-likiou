#include <iostream>

using namespace std;

int next(int x){
	int a;
	a=x+1;
	return a;
}

int main(){
	int num;
	cin>>num;
	cout<<next(num);
}
