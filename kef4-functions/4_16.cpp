#include <iostream>
#include <iomanip>
using namespace std;

void triangle(int n,char c){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<c;
		}
		cout<<endl;
	}
}

int main (){
	int a;
	char ch;
	cin>>a>>ch;
	triangle(a,ch);
	return 0;
}
