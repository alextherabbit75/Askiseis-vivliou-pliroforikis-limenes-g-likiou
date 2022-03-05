#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define N 2
struct product {
	int code;
	int quantity;
	float price;
	string desc;
}prod[N];

float calculate(product prod){
	float cost=prod.quantity*prod.price;
	return cost;
}

int main(){
	float sum=0;
	for(int i=0;i<N;i++){
		cin>>prod[i].code;
		cin>>prod[i].quantity;
		cin>>prod[i].price;
		cin>>prod[i].desc;
		sum+=calculate(prod[i]);
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	
return 0;
}
