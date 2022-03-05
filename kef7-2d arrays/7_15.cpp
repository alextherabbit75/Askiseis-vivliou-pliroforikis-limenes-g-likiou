#include <iostream>
using namespace std;

int main(){
    int arr[5][5],sum=0,maxsum=0,maxrow;

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"sums: ";
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
        if(sum>maxsum){
            maxsum=sum;
            maxrow=i;
        }

    }
    cout<<"max sum: "<<maxsum<<" line: "<<maxrow;


return 0;
}
