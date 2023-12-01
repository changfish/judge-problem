#include <iostream>
#include <algorithm>
using namespace std;

int n;

int main(){
	while(cin>>n&&n){
		int mx=0;
		int A[n+1][n],dp[n][n];
		for(int i=0;i<n;i++)	A[0][i]=0;
		for(int i=1;i<=n;i++){
			for(int j=0;j<n;j++){
				cin>>A[i][j];
				A[i][j]+=A[i-1][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<=n;j++){
				int line[n];
				for(int k=0;k<n;k++) {
					line[k]=A[j][k]-A[i][k];
				}
				for(int i=1;i<n;i++){
					line[i]=max(max(0,line[i]),line[i-1]+line[i]);
					mx=max(mx,line[i]);
				}
			}
		}
		cout<<mx<<endl;
	}
}
