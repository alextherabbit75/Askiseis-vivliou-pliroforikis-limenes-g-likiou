#include <iostream>
using namespace std;

int main(){
    int arr[10][10],cntr=1;

    for (int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                arr[i][j]=cntr;
                cntr++;
            }
    }

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
