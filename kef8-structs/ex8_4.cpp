#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct date{
	int dd;
	int mm;
	int yy;
	
};


struct member{
	int code;
	string email;
	date dob;
};

int main(){
	member list[5];
	for(int i=0;i<5;i++){
		cin>>list[i].code>>list[i].email>>list[i].dob.dd>>list[i].dob.mm>>list[i].dob.yy;
		if(list[i].dob.dd==5&&list[i].dob.mm==9&&list[i].dob.yy==2005){
			cout<<list[i].email;
		}
	}
	for(int i=0;i<5;i++){
		if(list[i].dob.dd==5&&list[i].dob.mm==9&&list[i].dob.yy==2005){
			cout<<list[i].email;
		}
	}
}
