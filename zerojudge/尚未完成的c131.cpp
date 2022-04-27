#include <iostream>
#include <string.h>		//memset陣列 好用=P 
#include <vector>

#define maxsize 84001
using namespace std;
int v[maxsize],s=0,r=0;//s紀錄第幾個case，r判斷有沒有走訪超過2次的點 

void dfs(vector<int> *tree,int current,int *v){	//**記得要判斷是否為空(或嘗試如果為空會不會走訪)
	for(int i=0;i<tree[current].size();i++){
		if(v[tree[current][i]]<2){
			v[tree[current][i]]++;
			dfs(tree,tree[current][i],v);
		}else{
			r=1;
			break;
		}	
	}
}

void cleartree(vector<int> *tree){
	for(int i=0;i<maxsize;i++)
	tree[i].clear();
}

int main() {
	int a,b;
	vector<int> root;
	while(cin>>a>>b){		//一開始的a、b當串列首 
		if(a<0&b<0)
			break;
		s++;
		memset(v,0,sizeof(v));
		vector<int> tree[maxsize];
		tree[a].push_back(b);
		while(cin>>a>>b){
			if(a==0&b==0){
				dfs(tree,,v);	//中間要放root	
				if(r){
					cout<<"Case "<<s<<" is not a tree.\n";
				}else{
					cout<<"Case "<<s<<" is a tree.\n";
				}
				r=0;
				cleartree(tree);
				break;
			}
			tree[a].push_back(b);	
		}
	} 
}

