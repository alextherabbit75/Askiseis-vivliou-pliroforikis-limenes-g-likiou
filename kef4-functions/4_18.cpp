#include <iostream>
#include <iomanip>
using namespace std;

void perfect(int a){
	int sum=0;
	for(int i=0;i<a;i++){
		if(a%i==0){
			sum+=i;
		}
	}
	if(a==sum){
		cout<<"perfect";
	}else
		cout<<"not perfect";
}

int main(){
	int n1;
	cin>>n1;
	perfect(n1);
	
	return 0;
}
