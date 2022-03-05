#include<iostream>

using namespace std;

void bubblesort(int arr[],int size){
	bool sorted;
	int temp;
	
	do{
		sorted=true;
		for(int i=0;i<size-1;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				sorted=false;
			}
		}
	}while(sorted==false);
	
}

int main(){
	int n;
	cin>>n;
	int n1[n];
	for(int i=0;i<n;i++){
		cin>>n1[i];
	}
	bubblesort(n1,n);
	cout<<n1[n-3]<<endl<<n1[n-2]<<endl<<n1[n-1]<<endl;
}
