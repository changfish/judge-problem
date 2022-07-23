#include <iostream>
using namespace std;

int main() {
	int n,t[3],path[3];	//t is frist path
	cin>>n>>path[2];
	int A[n][n],B[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
			B[i][j]=0;
		}
	}
	path[0]=path[1]=n/2;
	for(int i=0;i<n*n;i++){
		B[path[0]][path[1]]=1;
		cout<<A[path[0]][path[1]];
		if(i>0){
			t[2]=path[2]+1;
			t[2]%=4;
		}else{
			t[2]=path[2];
		}
		t[0]=path[0];
		t[1]=path[1];
		switch(t[2]){
			case 0:
				t[1]--;
				break;
			case 1:
				t[0]--;
				break;
			case 2:
				t[1]++;
				break;
			case 3:
				t[0]++;
				break;
		}
		if(B[t[0]][t[1]]==0){
			if(t[0]>=0 && t[0]<n &&t[1]>=0 &&t[1]<n){
				path[0]=t[0];
				path[1]=t[1];
				path[2]=t[2];
			}
		}else{
			switch(path[2]){
			case 0:
				path[1]--;
				break;
			case 1:
				path[0]--;
				break;
			case 2:
				path[1]++;
				break;
			case 3:
				path[0]++;
				break;
			}
		}	
	}
}
