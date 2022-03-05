#include <iostream>
#include <fstream>

using namespace std;
#define n 6
int sum=0;
void FillData(int arr[]){
	ifstream fin("da.txt");
	for(int i=0;i<n;i++){
		fin>>arr[i];
		sum+=arr[i];
		cout<<arr[i]<<endl;
	}
	fin.close();
}
int AboveAverage(int arr[]){
	float mo;
	int cntr=0;
	mo=sum/n;
	for(int i=0;i<n;i++){
		if(arr[i]>mo){
			cntr++;
		}
	}
	return cntr;
}
int Voters(int arr[]){
	int cntr=0;
	for(int i=0;i<n;i++){
		if(arr[i]>17){
			cntr++;
		}
	}
	return cntr;
}

int main(){
	int pop[n],abavg,vtrs;
	FillData(pop);
	abavg=AboveAverage(pop);
	cout<<abavg<<endl;
	vtrs=Voters(pop);
	cout<<vtrs<<endl;
	return 0;
}
