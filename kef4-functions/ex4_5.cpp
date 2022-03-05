#include <iostream>
using namespace std;

void rectangle(int h,int w,int &e,int &p){
	e=h*w;
	p=2*(h+w);
}

int main(){
	int mikos,platos,emv,per;
	
	cin>>mikos>>platos;
	rectangle(mikos,platos,emv,per);
	cout<<"emvadon "<<emv<<endl;
	cout<<"perimetros"<<per<<endl;
}
