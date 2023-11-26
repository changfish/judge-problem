#include <iostream>
using namespace std;

const int sz = 1e5+1;
long long dp[sz];

int DP(int n){
	if(dp[n]>=0)	return dp[n];
	return dp[n]=DP(n-1)+2*n-1;
}

int main(){
	for(int i=0;i<sz;i++)	dp[i]=-1;	
	dp[0]=0;
	dp[1]=1;
	dp[2]=4;
	int n,i=0,mid;
	while(cin>>n && n){
		i=0; 
		while(DP(i)<n)	i++;
		mid = DP(i)-i+1;
		if(i&1){
			if(n>mid){
				cout<<DP(i)-n+1<<" "<<i<<endl;
			}else if(n<mid){
				cout<<i<<" "<<n-DP(i-1)<<endl;
			}else	cout<< i <<" "<< i <<"\n";
		}else{
			if(n>mid){
				cout<<i<<" "<<DP(i)-n+1<<endl;
			}else if(n<mid){
				cout<<n-DP(i-1)<<" "<<i<<endl;
			}else	cout<< i <<" "<< i <<"\n";
		}
	}
}
