#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;


int main(){
	int num[5],maxn=0;
	ifstream fin("in.txt");
	ofstream fout("out1.txt");
	for(int i= 0;i<5;i++){
		fin>>num[i];
		if(num[i]>maxn)
		maxn=num[i];
	}
	fout<<maxn;
	
fin.close();
fout.close();	
return 0;	
}
