#include <iostream>
using namespace std;

int main(){
    int arr[4][4],maxr[4],cntr=0,maxe=0,pos;
    bool check=false;

    for (int i=0; i<4; i++){
            for (int j=0; j<4; j++){
                cin>>arr[i][j];
            }
    }

    for (int i=0; i<4; i++){
            for (int j=0; j<4; j++){
                if(arr[i][j]<0)
                    check=true;

                if(arr[i][j]>maxe){
                    maxe=arr[i][j];
                }
            }
            if(check==true)
                cntr++;
            maxr[i]=maxe;
            maxe=0;
            cout<<"max num of row "<<i<<" is: "<<maxr[i]<<endl;
    }
    pos=4-cntr;
    cout<<"Number of rows that only have positive values: "<<pos<<endl;


return 0;
}
