#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	int a,sum=0;
	ifstream fin("5in1.txt");
	ifstream fun("5in2.txt");
	ofstream fout("sum.txt");
	
	while(!fin.eof()){
		fin>>a;
		sum+=a;
	}
	
	while(!fun.eof()){
		fun>>a;
		sum+=a;
	}
	
	fout<<sum;
	
	
	fin.close();
	fun.close();
	fout.close();
	return 0;
	
}
	
