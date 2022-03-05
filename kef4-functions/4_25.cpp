#include <iostream>


using namespace std;
#define n 6

void shift_right(int arr[ ], int a){
			
	for(int j=0;j<a;j++){
		int last = arr[n - 1];
		for (int i = n - 1; i > 0; i--)	
			arr[i] = arr[i - 1];		
	
		arr[0] = last;
	}
}

int main(){
	int t[n],times;
	for(int i=0;i<n; i++){
		cout<<"enter number"<<endl;
		cin>>t[i];
	}
	cout<<"enter amount of shifts"<<endl;
	cin>>times;
	shift_right(t,times);
	for(int i=0;i<n; i++){
		cout<<t[i]<<endl;
	}
}
