#include <iostream>
#include <string>

using namespace std;

void search(int arr[],int &size,int &a,int &y){
	bool ba=false,by=false;
	for(int i=0;i<size;i++){
		if(arr[i]==a)
			ba=true;
		if(arr[i]==y){
			by=true;
		}
	}
	if(ba==true&&by==true){
		cout<<"both items found"<<endl;
	}else if(ba==true&&by==false){
		cout<<"item x found"<<endl;
	}else if(ba==false&&by==true){
		cout<<"item x found"<<endl;
	}else
		cout<<"-1"<<endl;
}

int main(){
	int N,srch1,srch2;
	cout<<"enter array size"<<endl;
	cin>>N;
	
	int num[N];
	for(int i=0;i<N;i++){
		cout<<"enter value for array position "<<i<<endl;
		cin>>num[i];
	}
	cout<<"search for num"<<endl;
	cin>>srch1;
	cout<<"search for another"<<endl;
	cin>>srch2;
	search(num,N,srch1,srch2);
	return 0;
}
