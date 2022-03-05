#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define N 2
struct times{
	int hrs;
	int mins;
	int secs;
};
struct timer{
	times start;
	times stop;
}t1;
int calculate(timer t){
	return ((t.stop.hrs-t.start.hrs)*60*60)+((t.stop.mins-t.start.mins)*60)+(t.stop.secs-t.start.secs);
}

int main(){
	cin>>t1.start.hrs;
	cin>>t1.start.mins;
	cin>>t1.start.secs;
	cin>>t1.stop.hrs;
	cin>>t1.stop.mins;
	cin>>t1.stop.secs;
	cout<<calculate(t1);
} 
