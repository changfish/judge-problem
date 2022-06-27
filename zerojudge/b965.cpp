#include <iostream>
using namespace std;

int A[10][10],tem[10][10],R,C;

void unturn(){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			tem[C-j-1][i]=A[i][j];
		}
	}
	int t=R;
	R=C;
	C=t;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			A[i][j]=tem[i][j];
		}
	}
}

void unreverse(){
	if(R%2){
		for(int i=0;i<C;i++){
			tem[R/2][i]=A[R/2][i];
		}
	}
	for(int i=0;i<R/2;i++){
		for(int j=0;j<C;j++){
			tem[R-i-1][j]=A[i][j];
			tem[i][j]=A[R-i-1][j];
		}
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			A[i][j]=tem[i][j];
		}
	}
}


int main(int argc, char** argv) {
	int N;
	while(cin>>R>>C>>N){
		int ot[N];
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>A[i][j];
			}
		}
		for(int i=N-1;i>=0;i--){
			cin>>ot[i];
		}
		for(int i=0;i<N;i++){
			if(ot[i])
				unreverse();
			else
				unturn();
		}
		cout<<R<<" "<<C<<endl;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cout<<A[i][j];
				if(j!=C-1)
					cout<<" ";
			}
			cout<<endl;
		}
	}
	
}
