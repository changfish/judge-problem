#include <iostream>
using namespace std;

int main(){
	int n,dir,x,y,tem1=1,tem2=1,tem=0;
	cin>>n>>dir;
	int A[n][n],B[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
			B[i][j]=0;
		}
	}
	y=n/2;
	x=n/2;
	for(int i=0;i<n*n;i++){
		cout<<A[y][x];
		switch(dir){
			case 0:
				x--;
				break;
			case 1:
				y--;
				break;
			case 2:
				x++;
				break;
			case 3:
				y++;
				break;
		}
		if(i==tem){
			dir = (dir+1)%4;
			tem2--;
			tem+=tem1;
		}
		if(tem2==0){
			tem2=2;
			tem1++; 
		}
	}
}
