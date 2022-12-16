#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n1,n2,count=0;
	while(cin>>n1>>n2){
		if(!n1)	break;
		count++;
		int dp[n1+1][n2+1],A1[n1],A2[n2];
		for(int i=0;i<n1;i++)
			cin>>A1[i];
		for(int i=0;i<n2;i++)
			cin>>A2[i];
		for(int i=0;i<=n1;i++){
			for(int j=0;j<=n2;j++){
				dp[i][j]=0;
			}
		}
		for(int i=1;i<=n1;i++){
			for(int j=1;j<=n2;j++){
				if(A1[i-1]==A2[j-1])
					dp[i][j] = dp[i-1][j-1]+1;
				else
					dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
		cout<<"Twin Towers #"<<count<<endl<<"Number of Tiles : ";
		cout<<dp[n1][n2]<<endl;		
	}
} 
