#include <iostream>
#include <vector>
using namespace std;

void dfs(int now,long long *h,int *A,long long step){
	if(step>h[now]){
		h[now]=step;
		if(A[now]!=0){
			dfs(A[now],h,A,step+1);
		}
	}else{
		if(A[now]!=0){
			dfs(A[now],h,A,step+1);
		}
	}
}

int main() {
	int n,a;
	vector<int> spot;
	cin>>n;
	long long sum=0,h[n+1];
	int A[n+1];
	for(int i=1;i<=n;i++){
		A[i]=0;
		h[i]=-1;
	}
	for(int i=1;i<=n;i++){
		cin>>a;
		if(!a){
			h[i]=0;
			spot.push_back(i);
		}
		int B[a];
		for(int j=0;j<sizeof(B)/sizeof(B[0]);j++){
			cin>>B[j];
			A[B[j]]=i;
		}
	}
	for(int i=0;i<spot.size();i++){
		dfs(spot[i],h,A,0);
	}	
	for(int i=1;i<=n;i++){
		if(A[i]==0)
			cout<<i<<endl;
		sum+=h[i];
	}
	cout<<sum;
}

