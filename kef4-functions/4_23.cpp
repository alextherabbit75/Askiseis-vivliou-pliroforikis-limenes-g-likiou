#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void fill(string st[],int sizear){
	for(int i=0;i<sizear;i++){
		cin>>st[i];
	}

}

int main(){
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	string st1[s1],st2[s2],st3[s3];
	fill(st1,s1);
	fill(st2,s2);
	fill(st3,s3);
	cout<<st1[s1-1]<<endl<<st2[s2-1]<<endl<<st3[s3-1]<<endl;
}
