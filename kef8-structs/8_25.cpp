#include<iostream>
#include<string>
using namespace std;
#define N 2

struct chars{
	int age;
	float height;
	int weight;
};
struct member {
	int code;
	string surname;
	string name;
	chars mem;
}members[N];

int find_limits(int al,int wl){
	int cntr=0;
	for(int i=0;i<N;i++){
	if(members[i].mem.age>al&&members[i].mem.weight>wl)
		cntr++;	
	}
return cntr;
}

void struct_sort(member arr[]){
	int S=N;
	bool sorted;
	member temp;
	do{
	sorted=true;
	for(int i=0;i<S-1;i++){
		if(arr[i].mem.height>arr[i+1].mem.weight){
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			sorted=false;
		}
	}
	S--;
	}while(sorted==false);
	
	
}
int main(){
	int wlim,agelim;
	for(int i=0;i<N;i++){
		cin>>members[i].code;
		cin>>members[i].surname;
		cin>>members[i].name;
		cin>>members[i].mem.age;
		cin>>members[i].mem.height;
		cin>>members[i].mem.weight;
	}
	cin>>agelim>>wlim;
	find_limits(agelim,wlim);
	struct_sort(members);
	for(int i=0;i<N;i++){
	cout<<members[i].surname;
	cout<<members[i].mem.height;
	cout<<members[i].mem.weight;	
	}
	
}
