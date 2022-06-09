#include <iostream>
#include <string.h>	//memset陣列 好用=P 
#include <vector>

#define maxsize 84001
using namespace std;
int v[maxsize],s=1,spot=0;//s紀錄第幾個case，spot紀錄節點數量 

void dfs(int current,vector<int> *tree){	//計算節點的數量
	for(int i=0;i<tree[current].size();i++){
		if(!v[tree[current][i]]){
			spot++;
			v[tree[current][i]]++;
			dfs(tree[current][i],tree);
		}
	}
}

int main() {
	int a,b,fs;		//用fs暫時紀錄起點位置 
	while(cin>>a>>b){
		int edge=0;
   		if(a<0&b<0)
			break;
		if(a==0&b==0){
			printf("Case %d is a tree.\n",s);
			s++;
		}else{
			vector<int> tree[maxsize];
		   	fs=a;
		   	edge++;
		   	tree[b].push_back(a);
			tree[a].push_back(b); 
		   	memset(v,0,sizeof(v));
			while(cin>>a>>b){
		   		if(!a)
		   			break;
		   		edge++;
		   		tree[b].push_back(a);		//紀錄父子節點
				tree[a].push_back(b); 
			}
			v[fs]++;
			v[fs]++;
			spot=1;
			dfs(fs,tree);				//一言不合就dfs 
			if(spot-edge==1){
				printf("Case %d is a tree.\n",s);
				s++;	
			}else{
				printf("Case %d is not a tree.\n",s);
				s++;
			}
			memset(v,0,sizeof(v));
			spot=0;
		}
	}
}
