#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int step=0;

void DFS(int root,int *parent,int *marble,vector<vector<int> > node){
	for(int i=0;i<node[root].size();i++){
		DFS(node[root][i],parent,marble,node);
	}
	if(parent[root]==-1)	return;
	int rm=marble[root]-1;
	marble[parent[root]]+=rm;
	step+=abs(rm);
}


int main(){
	int n;
	cin>>n;
	int marble[n+1],parent[n+1];
	for(int i=0;i<=n;i++)	parent[i]=-1;
	vector<vector<int> > node(n+1);
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>a;
		marble[i]=a;
		cin>>a;
		for(int j=0;j<a;j++){
			cin>>b;
			node[i].push_back(b);
			parent[b]=i;
		}
	}
	int root = 1;
	while(parent[root]!=-1)	root=parent[root];
	DFS(root,parent,marble,node);
	cout<<step;
}


