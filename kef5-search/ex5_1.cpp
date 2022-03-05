#include <iostream>

using namespace std;
int search(char arr[],int n,char target){
	int cntr=0;
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			cntr++;
		}
	}
	return cntr;
}

int main(){
	int times,cntrs;
	cin>>times;
	char t[times],target;
	cin>>target;
	for(int i=0;i<times;i++){
		cin>>t[i];
	}
	cntrs=search(t,times,target);
	cout<<cntrs;
}
