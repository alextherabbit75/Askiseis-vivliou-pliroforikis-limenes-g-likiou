#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	int a;
	ifstream fin("nums.txt");
	ofstream fun("even.txt");
	ofstream fout("odd.txt");
	
	for(int i=0;i<100;i++){
		fin>>a;
		if((a%2)==0){
			fun<<a<<endl;
		}else
		fout<<a<<endl;
	}
	
	
	
	
	fin.close();
	fun.close();
	fout.close();
	return 0;
	
}
