#include<iostream>

using namespace std;

int binary(int arr[],int n,int target){
	int first=0,mid,last=n-1,pos;
	while(first<=last){
		mid=(first+last)/2;
		if(target==arr[mid]){
			pos=mid;
			first=last+1;
		}else if(target<arr[mid]){
			last=mid-1;
		}else
			first=mid+1;
	}
	while(pos>0){
		cout<<"pos= "<<pos<<endl;
		if(arr[pos-1]==arr[pos]){
			pos=pos-1;
		}
	}
	if(arr[pos]==target){
		return pos;
	}
	return -1;
}

int main(){
	int size;
	cin>>size;
	int t[size],target;
	for(int i=0;i<size;i++){
		cin>>t[i];
		cout<<t[i]<<" ";
	}
	cout<<endl;
	cin>>target;
	cout<<binary(t,size,target)<<endl;
}
