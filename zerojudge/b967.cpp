#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int> *tree , int current , int step , int *v){
	for(int i=0;i<tree[current].size();i++){
		if(v[tree[current][i]]==0){
			v[tree[current][i]]=step+1;
			dfs(tree,tree[current][i],step+1,v);
		}	
	}
}

int main() {
   	int n;
   	ios::sync_with_stdio(0);
	  cin.tie(0);
   while(cin>>n){
	   int v[n];	//紀錄從起始點到該點的距離 
	   vector<int> tree[n];
	   for(int i=0;i<n-1;i++){		//建立無向圖 
			int a,b;
			cin>>a>>b;
			tree[a].push_back(b);
			tree[b].push_back(a);
			v[i]=0;
	   }
		v[n-1]=0;
		v[0]=1;
		dfs(tree,0,1,v);	//先隨便找個點當起始點，然後找離他最遠的點
		int max=v[0],node;
		for(int i=1;i<n;i++){
			if(max<v[i]){
				max=v[i];
				node=i;
			}
			v[i]=0;
		}
		v[0]=0;
		v[node]=1;
		dfs(tree,node,1,v);
		max=v[0];
		for(int i=1;i<n;i++){
			if(max<v[i]){
				max=v[i];
			}
		}
		printf("%d\n",max-1);	//記得max要-1才是答案 
   }
}
