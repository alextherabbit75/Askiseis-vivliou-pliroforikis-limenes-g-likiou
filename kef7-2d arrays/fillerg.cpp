#include<iostream>
#include <cstdio>

using namespace std;



int main(){
    int arr[4][5],maxn=0,cntr=0,sum=0;
    for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cin>>arr[i][j];
                sum+=arr[i][j];
                if(arr[i][j]==0)
                    cntr++;
                if(arr[i][j]>maxn){
                    maxn=arr[i][j];
                }

            }
    }
    cout<<sum<<endl;
    cout<<(float)sum/20<<endl;
    cout<<cntr<<endl;
    cout<<maxn<<endl;
    for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }

return 0;
}
