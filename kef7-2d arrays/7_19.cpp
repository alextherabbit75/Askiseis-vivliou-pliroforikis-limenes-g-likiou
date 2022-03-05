#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter size of map"<<endl;
    cin>>n>>m;
    char arr[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<"enter value for position"<<"("<<i<<","<<j<<")"<<endl;
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='x'){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }



return 0;
}
