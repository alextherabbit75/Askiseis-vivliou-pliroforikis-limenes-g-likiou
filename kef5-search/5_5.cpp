#include <iostream>

using namespace std;
int search(float arr[],int n,float target){
	int cntr=0;
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return cntr;
}

int main(){
	int times,pos;
	cin>>times;
	float t[times],target;
	cin>>target;
	for(int i=0;i<times;i++){
		cin>>t[i];
	}
	pos=search(t,times,target);
	cout<<pos;
}
