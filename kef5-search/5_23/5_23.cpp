#include <iostream>
#include <string>
#include <fstream>
using namespace std;





int main(){
	int maxt=0,maxv,n1[10],n2[25],cntr1=0,cntr2=0;
	ifstream fin("inA.txt");
	ifstream fun("inB.txt");
	for(int i=0;i<10;i++){
		fin>>n1[i];
	}
	for(int i=0;i<25;i++){
		fun>>n2[i];
	}
	for(int i=0;i<10;i++){
		cout<<"pos "<<i<<" value "<<n1[i]<<endl;
		for(int j=0;j<10;j++){
			if(n1[i]==n1[j]){
				cntr1++;
			}
		}
		if(cntr1>maxt){
			maxt=cntr1;
			maxv=n1[i];
			cout<<"new highest frequency: "<<maxt<<" from value: "<<maxv<<endl;
		}
		cntr1=0;
	}
	cout<<"value with highest frequency: "<<maxv<<endl;
	for(int i=0;i<25;i++){
		if(n2[i]==maxv)
			cntr2++;
	}
	cout<<"amount of highest frequency value encountered in file 2 is "<<cntr2;
	
}
