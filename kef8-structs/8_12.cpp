#include<iostream>
#include<string>
using namespace std;
#define N 2
struct microsoft {
	int code;
	string name;
	string user;
	string pass;
}sch[N];

int user_search(microsoft user[],string key){
	for(int i=0;i<N;i++){
		if(key==user[i].user)
			return i;
	}
		
return -1;
}


int main(){
	string target;
	int ret;
	for(int i=0;i<N;i++){
		cin>>sch[i].code;
		cin>>sch[i].name;
		cin>>sch[i].user;
		cin>>sch[i].pass;
	}
	cin>>target;
	ret=user_search(sch,target);
	if(ret!= -1){
		cout<<"school code: "<<sch[ret].code<<endl<<"School name: "<<sch[ret].name<<endl;
		cout<<"User name:  "<<sch[ret].user <<endl<<"User password "<<sch[ret].pass<<endl;
		}else
			cout<<"not found";
	
return 0;
}
