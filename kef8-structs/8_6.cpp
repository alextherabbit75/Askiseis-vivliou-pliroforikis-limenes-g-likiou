#include<iostream>
#include<string>
using namespace std;
#define N 2
struct schools {
	int code;
	string name;
	string city;
	int tel;
}sch[N];

int main(){
	for(int i=0;i<N;i++){
		cin>>sch[i].code;
		cin>>sch[i].name;
		cin>>sch[i].city;
		cin>>sch[i].tel;
	}
	for(int i=0;i<N;i++){
		if(sch[i].city=="Nicosia"||sch[i].city=="Lefkosia")
			cout<<sch[i].code<<" "<<sch[i].name<<" "<<sch[i].city <<" "<<sch[i].tel<<endl;
	}
	
return 0;
}
