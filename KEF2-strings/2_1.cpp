#include <iostream>
#include <string>

using namespace std;


int main(){
	string a,b,temp;
	cin>>a>>b;
	
	cout<<a.size()<<endl<<b.size()<<endl<<a+b<<endl;
	temp= a[0];
	a[0]=b[0];
	b[0]=temp[0];
	cout<<a<<endl<<b;
	
	
	
}
