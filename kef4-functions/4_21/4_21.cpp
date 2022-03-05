#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

string reverseString(string st){
	char temp;
	int len = st.size();
  int n=len-1;
  for(int i=0;i<(len/2);i++){

    temp = st[i];
    st[i] = st[n];
    st[n] = temp;
    n = n-1;

  }
	return st;
}


int main(){
	string st1;
	ifstream fin ("in.txt");
	ofstream fout ("out.txt");
	
	while(!fin.eof()){
		getline(fin,st1);
		fout<<reverseString(st1)<<endl;
	}
	
	fin.close();
	fout.close();
}
