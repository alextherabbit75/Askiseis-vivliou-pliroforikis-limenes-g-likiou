#include <iostream>
#include <iomanip>
using namespace std;

bool positive(int arr[5]){
	for(int i=0;i<5;i++){
		if(arr[i]<=0){
			return false;
		}
	}
	return true;
}

int main(){
	int t[5];
	for(int i=0;i<5;i++){
		cin>>t[i];
	}
	cout<<positive(t);
}
