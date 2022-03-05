#include <iostream>

using namespace std;



int main(){
	int N,M,posx,posy,exx,exy;
	cin>>N>>M;
	char arr[N][M],temp;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>arr[i][j];
			if(arr[i][j]=='X'){
				exx=j;
				exy=i;
			}
			if(arr[i][j]=='*'){
				posx=j;
				posy=i;
				
			}
		}
	}
	
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cout<<arr[i][j];
			
		}
		cout<<endl;
	}
	cout<<"x coordinates: "<<exx<<" "<<exy<<endl;
	cout<<"player coordinates: "<<posx<<" "<<posy<<endl;
	
	int i=posy,j=posx;
	while(exx!=posx && exy!=posy){
		if(i<N-1&&arr[i+1][j]=='.'){
			i=i+1;
			posy=i;
			cout<<"S"<<endl;
		}else if(i>0&&arr[i-1][j]=='.'){
			i=i-1;
			posy=i;
			cout<<"N"<<endl;
		}
		
		
		if(j<M-1&&arr[i][j+1]=='.'){
			j=j+1;
			posx=j;
			cout<<"E"<<endl;
		}else if(j>0&&arr[i][j-1]=='.'){
			j=j-1;
			posx=j;
			cout<<"W"<<endl;
		}
	
	
	}
	
	
	
return 0;
}
