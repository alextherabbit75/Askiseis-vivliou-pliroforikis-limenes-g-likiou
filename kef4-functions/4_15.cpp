#include <iostream>
#include <iomanip>
using namespace std;

bool prime(int n){
	bool p=true;
	if (n == 0 || n == 1) {
        p = false;
    }
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                p = false;
				return p;
            }
        }
    }
	return p;
}


int main(){
	int n1;
	cin>>n1;
	cout<<prime(n1);
	
	
}
