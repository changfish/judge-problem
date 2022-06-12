#include <iostream>
#include <vector>
#include <string>
using namespace std;

string B;

void op(int *A,int n){
	vector<char> C,X;
	for(int i=0;i<n;i++)
		C.push_back(B[i]);
	for(int i=n-1;i>=0;i--){
		if(A[i]==0){
			X.insert(X.begin(),C[i]);
		}else{
			X.push_back(C[i]);
		}
	}
	for(int i=0;i<n;i++)
		B[i]=X[i];
}

void tno(int n){
	if(n%2==1){
		for(int i=n/2+1;i<n;i++){
			char t=B[i];
			B[i]=B[i-n/2-1];
			B[i-n/2-1]=t;
		}
	}else{
		for(int i=n/2;i<n;i++){
			char t=B[i];
			B[i]=B[i-n/2];
			B[i-n/2]=t;
		}
	}
}

int main() {
	int m,n;
	cin>>m>>n;
	string C[m];//C暫存
	int t[m];
	int A[m][n];
	for(int i=0;i<m;i++){
		cin>>C[i];
	}
	cin>>B;
	for(int i=0;i<m;i++){
		t[i]=0;
		for(int j=0;j<n;j++){
			A[i][j]=C[i][j]-'0';
			if(A[i][j]==1)
				t[i]++;
		}
	}
	for(int i=m-1;i>=0;i--){
		op(A[i],n);
		if(t[i]%2==1)
			tno(n);
	}
	cout<<B;
}
