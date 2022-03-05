#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int search(string st,char a){
	int cntr=0;
	for(int i=0;i<st.size();i++){
		if(st[i]==a)
			cntr++;
	}
	return cntr;
}


int main(){
	char srch;
	string st1;
	cin>>st1>>srch;
	
	cout<<search(st1,srch);
}
