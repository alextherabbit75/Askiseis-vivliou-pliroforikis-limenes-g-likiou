#include <iostream>
#include <iomanip>

using namespace std;
#define A 5
int pmax5(int arr[][2]){
	int cntr=0;
	for(int i=0;i<A;i++){
		if(arr[i][1]<5){
			cntr++;
		}
	}
	
return cntr;
}

int main(){
string names[A];
int vathm[A][4],protasi[A][2],tencntr=0,maxv=0,fivecntr=0;
bool check=false;

for(int i=0;i<A;i++){
	cout<<"enter architect name"<<endl;
	cin>>names[i];
	for(int j=0;j<4;j++){
		cout<<"enter score number "<<i+1<<" for architect "<<names[i]<<endl;
		cin>>vathm[i][j];
		if(vathm[i][j]==10)
			check=true;
		
		if(vathm[i][j]>maxv){
			protasi[i][0]=j;
			protasi[i][1]=vathm[i][j];
			maxv=vathm[i][j];
		}
	}
	if(check==true){
		tencntr++;
	}
	check=false;
	maxv=0;
}

cout<<"Architects that have achieved a 10/10: "<<tencntr<<endl;	
fivecntr=pmax5(protasi);
cout<<"Architects with max grades lower than 5/10: "<<fivecntr<<endl;
	
	
	
return 0;
}
