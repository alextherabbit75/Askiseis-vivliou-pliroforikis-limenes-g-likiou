#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	int a;
	string name;
	ifstream fin("names.txt");
	ofstream fout("c.txt");
	
	fin>>a;
	for(int i=0;i<a;i++){
		fin>>name;
		if(name[i]=='C'){
			fout<<name<<endl;
		}
	}
	
	
	
	
	fin.close();
	fout.close();
	return 0;
	
}
