#include<iostream>
#include<string>
using namespace std;
#define N 2
struct employee {
	int code;
	string name;
	string surname;
	int sal;
}emp[N];

int main(){
	for(int i=0;i<N;i++){
		cin>>emp[i].code;
		cin>>emp[i].name;
		cin>>emp[i].surname;
		cin>>emp[i].sal;
	}
	for(int i=0;i<N;i++){
		cout<<emp[i].code<<" "<<emp[i].name<<" "<<emp[i].surname <<" "<<emp[i].sal<<endl;
	}
	
return 0;
}
