#include <iostream>
using namespace std;


char checkwinner(char board[][3])
{
int i=0;

    for(i=0; i<3; i++){
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2]){
            return board[i][0];
        }
    }

    for(i=0; i<3; i++){
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i]){
            return board[0][i];
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        return board[0][0];
    }

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]){
       return board[0][2];
   }

    return ' ';
}


int main(){
    int cntr=0;
    char arr[3][3],winid;

    for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                cin>>arr[i][j];
            }
    }
    winid=checkwinner(arr);
    if(winid==' '){
        cout<<"draw"<<endl;
    }else
    cout<<winid<<" won the game";





return 0;
}
