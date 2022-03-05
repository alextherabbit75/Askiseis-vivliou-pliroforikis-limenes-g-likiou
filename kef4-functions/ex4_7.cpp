#include <iostream>
#define N 5
using namespace std;

void fill(int arr[]);
void print(int arr[]);


int main(){
	int A[N];
	fill(A);
	print(A);
	
return 0;
}

void fill(int arr[]){
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
}
void print(int arr[]){
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
}
