#include <iostream>
#include <iomanip>
using namespace std;

float prod(float a,float b){
	 float c;
	 c=a*b;
	 return c;
}

int main(){
	float n1,n2,pr;
	cin>>n1>>n2;
	pr=prod(n1,n2);
	cout<<fixed<<setprecision(2)<<pr;
	
	
}
