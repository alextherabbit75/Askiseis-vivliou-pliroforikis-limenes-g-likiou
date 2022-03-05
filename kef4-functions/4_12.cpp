#include <iostream>
#include <iomanip>
using namespace std;


bool caps(char letter){
	if(letter>'A'&&letter<'Z'){
		return true;
	}
	return false;
}

int main(){
	char c;
	cin>>c;
	cout<<caps(c);
}
