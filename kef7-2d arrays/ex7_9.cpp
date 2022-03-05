#include <iostream>
using namespace std;
#define ROWS 7
#define COLS 5
void fill_array(char arr[][COLS]){
    for (int i=0; i<ROWS; i++){
            for (int j=0; j<COLS; j++)
                cin >> arr[i][j];
    }
}
int main(){
    char sea[ROWS][COLS];
    fill_array(sea);
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            if(sea[i][j]=='x'){
                if(i>0)
                    sea[i-1][j]='1';
                if(i<ROWS)
                    sea[i+1][j]='1';
                if(j>0)
                    sea[i][j-1]='1';
                if(j<COLS)
                    sea[i][j+1]='1';
                if(i>0&&j>0)
                    sea[i-1][j-1]='1';
                if(i>0&&j<COLS)
                    sea[i-1][j+1]='1';
                if(i<ROWS&&j>0)
                    sea[i+1][j-1]='1';
                if(i<ROWS&&j<COLS)
                    sea[i+1][j+1]='1';
            }
        }
    }
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            cout<<sea[i][j];
        }
        cout<<endl;
    }

return 0;
}
