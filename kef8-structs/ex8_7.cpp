#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct school {
	int code;
	string name;
	int tel;
	string city;
};

int school_search(school sch[],int key,int N){
	for(int i=0;i<N;i++){
		if(key==sch[i].code)
			return i;
	}
	
return -1;
}

int main(){
	school sch[200];
	int target,cnt=0;
	ifstream fin("schools.txt");
	while(!fin.eof()){
		fin>>sch[cnt].code;
		fin>>sch[cnt].name;
		fin>>sch[cnt].tel;
		fin>>sch[cnt].city;
		cnt++;
	}
	cin>>target;
	int pos=school_search(sch,target,cnt);
	if(pos==-1)
		cout<<"School not found"<<endl;
	else{
		cout<<sch[pos].code<<" "<<sch[pos].name<<" "<<sch[pos].tel<<" "<<sch[pos].city<<endl;
	}
	
	fin.close();
	return 0;
}
