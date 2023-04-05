#include <iostream>
using namespace std;

const int N = 5e4+1;
int parent[N];

int find(int x){
	if(parent[x]==-1 || parent[x] == x){
		return x;
	}else{
		return find(parent[x]);
	}
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n,tem,ans=0;
	cin>>n;
	for(int i=0;i<N;i++)	parent[i]=-1;
	for(int i=0;i<n;i++){
		cin>>tem;
		parent[i] = find(tem); 
		parent[tem] = find(i);
	}
	for(int i=0;i<n;i++){
		if(parent[i]==i)	ans++;
	}
	cout<<ans;
}
