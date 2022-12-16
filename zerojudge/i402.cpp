#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long


int main(){
	int m,n,tem;
	cin>>m>>n;
	int dp1[m][n],dp2[m][n];
	vector<int>	v1,v2;
	for(int i=0;i<m;i++){
		cin>>tem;
		v1.push_back(tem);
	}
	for(int j=0;j<n;j++){
		cin>>tem;
		v2.push_back(tem);
	}
	for(int i=0;i<m;i++){
		dp1[i][0]=v2[0]*v1[i];
	}
	for(int i=0;i<n;i++){
		dp1[0][i]=v2[i]*v1[0];
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			dp1[i][j] = max(dp1[i-1][j-1],0)+v1[i]*v2[j];
		}
	}
	int ans=dp1[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ans = max(ans,dp1[i][j]); 
		}
	}
	reverse(v1.begin(),v1.end());
	for(int i=0;i<m;i++){
		dp2[i][0]=v2[0]*v1[i];
	}
	for(int i=0;i<n;i++){
		dp2[0][i]=v2[i]*v1[0];
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			dp2[i][j] = max(dp2[i-1][j-1],0)+v1[i]*v2[j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ans = max(ans,dp2[i][j]); 
		}
	}
	cout<<ans;
}
 
