#include <iostream>
#include <string>
#define N 5
using namespace std;

string search(int num,int narr[],string sarr[],int size){
	for(int i=0;i<size;i++){
		if(narr[i]==num){
			return sarr[i];
		}
	}
	return "-1";
}


int main(){
	int n,am[N];
	string srch,emails[N];
	for(int i=0;i<N;i++){
		cout<<"enter id and email"<<endl;
		cin>>am[i]>>emails[i];
	}
	cout<<"enter id to search for"<<endl;
	cin>>n;
	srch=search(n,am,emails,N);
	cout<<srch;
}
