#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string line;
	ifstream fin("lines.txt");
	ofstream fout("out4.txt",(ios::out|ios::app));
	fout<<endl;
	for(int i=0;i<9;i++){
		getline(fin,line);
		fout<<line<<endl;
	}
	
	
	
	fin.close();
	fout.close();
	return 0;
}
