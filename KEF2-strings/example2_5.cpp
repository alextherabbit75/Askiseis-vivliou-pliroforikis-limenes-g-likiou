#include <iostream>
#include <string>
using namespace std;

int cnt[26];

int main(){
	string st1;
	cin>>st1;
	for(int i=0;i<st1.size();i++)
		cnt[st1[i]-'A']++;
	int maxt=0,pos=-1;
	for(int i=0;i<26;i++)
		if(cnt[i]>maxt){
			maxt=cnt[i];
			pos=i;
		}
		cout<<char(65+pos);
		return 0;
		
		
}
