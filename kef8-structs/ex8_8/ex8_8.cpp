#include <iostream>
#include<string>
#include<cmath>
#include <iomanip>
#include <fstream>

using namespace std;

#define N 5

struct student {
	string name;
	int t1;
	int t2;
	int F;
}A3[N];

void struct_sort(student arr[]){
	int S=N;
	bool sorted;
	student temp;
	do{
	sorted=true;
	for(int i=0;i<S-1;i++){
		if(arr[i].F>arr[i+1].F){
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
	ifstream fin("students.txt");
	ofstream fout("results.txt");
	for(int i=0;i<N;i++){
		fin>>A3[i].name>>A3[i].t1>>A3[i].t2;
		A3[i].F=round((A3[i].t1+A3[i].t2)/2.0);
	}
	
	struct_sort(A3);
	for(int i=0;i<N;i++)
		fout<<setw(10)<<A3[i].name<<setw(10)<<A3[i].F<<endl;
		
fin.close();
fout.close();
return 0;
}
