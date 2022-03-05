#include <iostream>

using namespace std;
int search(char arr[],int n,char target){
	int pos;
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			pos=i;
		}
	}
	return pos;
}

int main(){
	int times,pos;
	cin>>times;
	char t[times],target;
	cin>>target;
	for(int i=0;i<times;i++){
		cin>>t[i];
	}
	pos=search(t,times,target);
	cout<<pos;
}
