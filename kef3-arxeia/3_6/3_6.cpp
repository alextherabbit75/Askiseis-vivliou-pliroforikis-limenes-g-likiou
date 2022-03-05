#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	int age;
	string name;
	ifstream fin("citizens.txt");
	ofstream fout("elder.txt");
	for(int i=0;i<3;i++){
		fin>>age>>name;
		
		if(age>65)
		 fout<<name<<endl;
	}



fin.close();

return 0;
}
