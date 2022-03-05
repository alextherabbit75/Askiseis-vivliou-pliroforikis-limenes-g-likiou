#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

ifstream fin("numbers.txt");
ofstream fout("squares.txt");
int cnt=0;

void fill(int nums[]){
	while(!fin.eof()){
		fin>>nums[cnt];
		cnt++;
	}
}
bool square(int n){
	int x = (int)(sqrt(n)+0.5);
	if(x*x==n)
		return true;

return false;
}

void print(int nums[]){
	for(int i=0;i<cnt;i++){
		if(square(nums[i])){
		fout<<nums[i]<<" ";
		}
	}
}

int main(){
	int numbers[100];
	fill(numbers);
	print(numbers);
	
	fin.close();
	fout.close();
	
return 0;
}
