#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct student{
	int am,tel;
	string name;
	bool ekt;
};


int main(){
	student g33[5];
	
	for(int i=0;i<5;i++){
		cin>>g33[i].am>>g33[i].name>>g33[i].tel>>g33[i].ekt;
	
	}
	cout<<"arithmos mitroou"<<setw(15)<<"onoma"<<setw(15)<<"tilefono"<<setw(15)<<"ektopismenos"<<endl;
	for(int i=0;i<5;i++){
		cout<<g33[i].am<<setw(15)<<g33[i].name<<setw(15)<<g33[i].tel<<setw(15)<<g33[i].ekt<<endl;	
	}
}
