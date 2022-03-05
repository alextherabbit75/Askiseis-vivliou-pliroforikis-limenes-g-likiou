#include <iostream>
#include <string>

using namespace std;

int search(char arr[],int &N,char &c){
	int cntr=0;
	if(arr[0]==c&&arr[1]==c&&arr[2]!=c)
		cntr++;
		
	if(arr[N-1]==c && arr[N-2]==c && arr[N-3]!=c)
		cntr++;
		
	for(int i=1;i<N-2;i++){
		if(arr[i]==c&&arr[i+1]==c&&arr[i+2]!=c &&arr[i-1]!=c){
			cntr++;
		}
	}
	return cntr;
}

int main(){
	int N,cntr=0;
	char srch;
	cin>>N;
	char st[N];
	for(int i=0;i<N;i++){
		cout<<"enter character"<<endl;
		cin>>st[i];
	}
	cout<<"enter character to search"<<endl;
	cin>>srch;
	cntr=search(st,N,srch);
	cout<<cntr;
}
