#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int age[10],temp;
	bool sorted;
	string name[10],stemp;
	for(int i=0;i<10;i++){
		cout<<"enter name and age"<<endl;
		cin>>name[i]>>age[i];
	}
	do{
		sorted=true;
		for(int i=0;i<9;i++){
			if(age[i]>age[i+1]){
				temp=age[i];
				age[i]=age[i+1];
				age[i+1]=temp;
				stemp=name[i];
				name[i]=name[i+1];
				name[i+1]=stemp;
				sorted=false;
			}
		}
	}while(sorted==false);
	
	for(int i=0;i<10;i++){
		cout<<setw(20)<<name[i]<<setw(20)<<age[i]<<endl;
	}
}
