#include <iostream>
using namespace std;

int main(){
    int arr[3][3],cntr=0;
    bool valid=true;

    for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                cin>>arr[i][j];
            }
    }

    for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if(arr[i][j]<1||arr[i][j]>9){
                        valid=false;
                    }
                for (int a=0; a<3; a++){


                        for (int b=0; b<3; b++){
                            if(arr[i][j]==arr[a][b]){
                                cntr++;
                            }
                        }
                    }
                        if(cntr>=2)
                            valid=false;
                        cntr=0;
                }
            }
    if(valid==false)
        cout<<"not valid"<<endl;
        else
            cout<<"valid"<<endl;


return 0;
}
