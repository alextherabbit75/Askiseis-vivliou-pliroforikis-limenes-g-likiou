#include<iostream>
#include<iomanip>
#include<string>
#define N 5
using namespace std;

void read(int grades[],string names[]){
	for(int i=0;i<N;i++){
		cin>>grades[i]>>names[i];
	}
}
double average(int grades[]){
	int sum=0;
	for(int i=0;i<N;i++){
		sum+=grades[i];
	}
	return (double) sum/N;
}

string max_grade(int grades[],string names[]){
	int maxg=grades[0];
	string maxn=names[0];
	for(int i=1;i<N;i++){
		if(grades[i]>maxg){
			maxg=grades[i];
			maxn=names[i];
		}
	}
	return maxn;
}

int main(){
	int vathmoi[N];
	string onomata[N];
	read(vathmoi,onomata);
	cout<<"avg: "<<fixed<<setprecision(1)<<average(vathmoi)<<endl;
	cout<<"Best student= "<<max_grade(vathmoi,onomata)<<endl;
return 0;
}
