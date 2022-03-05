#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n],maindsum=0,secdsum=0;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if(i==j){
                    maindsum+=arr[i][j];
                }
                if(i==n-j-1){
                    secdsum+=arr[i][j];
                }
            }

        }
        cout<<"main diagonal sum: "<<maindsum<<endl;
        cout<<"secondary diagonal sum: "<<secdsum<<endl;




return 0;
}
