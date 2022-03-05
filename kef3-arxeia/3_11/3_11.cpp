#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	
	string n1,n2;
	bool check=true;
	ifstream fin("file1.txt");
	ifstream fun("file2.txt");
	
	
	while((!fin.eof())&&(!fun.eof())){
		getline(fin,n1);
		getline(fun,n2);
		if(n1==n2&&check==true){
			check=true;
		}else
		 check=false;
	}
	
	if(check==true)
		cout<<"files are the same"<<endl;
		else
		cout<<"files arent the same"<<endl;
	
	
	
	
	fin.close();
	fun.close();
	return 0;
	
}
