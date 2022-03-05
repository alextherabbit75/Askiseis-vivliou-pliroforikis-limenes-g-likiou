#include <iostream>
#include <string>

using namespace std;


int main(){
	string ap;
	int cntr=0;
	
	cin>>ap;
	
	for(int i=0;i<ap.size();i++){
		if(ap[i]=='P')
		cntr++;
		
	}
	if(cntr>=(ap.size()*0.75))
		cout<<"pass"<<endl;
		else
			cout<<"fail"<<endl;
	
	
	
}
