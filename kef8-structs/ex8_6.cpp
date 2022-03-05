#include <iostream>
#include <iomanip>
using namespace std;

struct advertising{
	int total;
	double per;
	double amount;
};

double calc(advertising ad){
	double price;
	price =ad.total*ad.per/100*ad.amount;
	return price;
}

int main(){
	advertising ads;
	cin>>ads.total;
	cin>>ads.per;
	cin>>ads.amount;
	cout<<fixed<<setprecision(2)<<calc(ads)<<endl;
}
