#include <iostream>
#include <iomanip>
using namespace std;

void pyramid(int h){
	int s=h,t;
	for(int i=0;i<h;i++){
		cout<<setw(s);
		t=(1+(2*i));
		for(int j=0;j<t;j++)
		cout<<"*";
		
		cout<<endl;
		s-=1;
	}
}

int main(){
	int n;
	cin>>n;
	pyramid(n);
}
