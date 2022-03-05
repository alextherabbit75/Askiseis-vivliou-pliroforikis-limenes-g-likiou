#include<iostream>

using namespace std;

void bubblesort(float arr[],int size){
	bool sorted;
	float temp;
	
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
void reversebubblesort(float arr[],int size){
	bool sorted;
	float temp;
	
	do{
		sorted=true;
		for(int i=size;i>0;i--){
			if(arr[i]>arr[i-1]){
				temp=arr[i];
				arr[i]=arr[i-1];
				arr[i-1]=temp;
				sorted=false;
			}
		}
	}while(sorted==false);
	
}
int main(){
	int n;
	cin>>n;
	float n1[n],sum=0,mo;
	for(int i=0;i<n;i++){
		cin>>n1[i];
		sum+=n1[i];
	}
	mo=sum/n;
	cout<<"mo: "<<mo<<endl;
	if(mo<10){
		bubblesort(n1,n);
	}else
		reversebubblesort(n1,n);
		
	for(int i=0;i<n;i++){
		cout<<n1[i]<<endl;
	}
	
	return 0;
}
