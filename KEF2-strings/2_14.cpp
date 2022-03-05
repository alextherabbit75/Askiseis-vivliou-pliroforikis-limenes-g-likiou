#include <iostream>
#include <string>

using namespace std;

int cnt[26];
int main(){
	
	string password;
	cin>>password;
	
	for(int i=0;i<password.size();i++){
		if(password[i]<89&&password[i]>=65){
			password[i]=password[i]+2;
		}else if(password[i]==89)
			password[i]=65;
			else if(password[i]==90)
				password[i]==66;
			
	}
	cout<<password;
	
	
}
