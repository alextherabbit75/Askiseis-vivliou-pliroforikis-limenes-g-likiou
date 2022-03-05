#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	int num[3],sum,a,b,c;
	ifstream fin("ask3_in.txt");
	ofstream fout("out1.txt");
	for(int i=0;i<3;i++){
		fin>>num[i];
	}
	a=(num[0]/100)*100;
	b=((num[1]/10)%10)*10;
	c=num[2]%10;
	cout<< num[0]<< " "<<a<<endl<< num[1]<< " "<<b<<endl<< num[2]<< " "<<c<<endl;
	sum=a+b+c;
	fout<<sum;
	
fout.close();
fin.close();
return 0;
}
