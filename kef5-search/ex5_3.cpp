#include<iostream>

using namespace std;

int binary(double arr[],int n,double target){
	int first=0,mid,last=n-1;
	while(first<=last){
		mid=(first+last)/2;
		if(target==arr[mid]){
			return mid;
		}else if(target<arr[mid]){
			last=mid-1;
		}else
			first=mid+1;
	}
	return -1;
}

int main(){
	int size;
	cin>>size;
	if(size>0)ajdfjyhkdjfjfujjj
	double t[size],target;
	cin>>target;
	for(int i=0;i<size;i++){
		cin>>t[i];
	}
	cout<<binary(t,size,target)<<endl;
}
