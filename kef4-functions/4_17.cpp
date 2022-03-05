#include <iostream>
#include <iomanip>
using namespace std;

void rect(double w, double l, double &e, double &p){
	e=w*l;
	p=w+w+l+l;
	
}

int main(){
	double platos,mikos,emv,per;
	cin>>platos>>mikos;
	rect(platos,mikos,emv,per);
	cout<<"emvadon: "<<emv<<endl<<"perimetros: "<<per<<endl;
}
