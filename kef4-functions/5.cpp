#include<iostream>

using namespace std;
int cnt = 0;
int sum_of_digits(int x){
	int temp=x,sum=0;
	while(temp>0){
		sum+=temp%10;
		temp/=10;
	}
	cnt++;
return sum;
}


int main(){

int num,total=0;
cin>>num;
while(num!=0){
	total+=sum_of_digits(num);
	cin>>num;
}	
cout<<total<<" "<<num;

return 0;
}                                   
