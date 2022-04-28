#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <string.h>		//memset陣列 好用=P 
#include <vector>

#define maxsize 84001
using namespace std;
int v[maxsize],s=0,edge=0; //v紀錄是否走訪過,s來記錄case,edge紀錄有多少邊(邊=點-1) 

void dfs(vector<int> *tree,int current){
	for(int i=0;i<tree[current].size();i++){
		if(v[tree[current][i]]==0){
			v[tree[current][i]]=1;
			edge++;
			dfs(tree,tree[current][i]);
		}
	}
}

int main() {
	int a,b,root;	//root當起始點(假的根) 
	while(cin>>a>>b){
		if(a<0&b<0){
			break;
		}
		vector<int> tree[maxsize],t;
		tree[a].push_back(b);		//建立無向圖 
		tree[b].push_back(a);
		int spot=0;
		root=a;
		s++;
		if(a==0&b==0){
			cout<<"Case "<<s<<" is a tree.\n";
			s++;
		}else{
			if(a!=b){
				t.push_back(a);
				t.push_back(b);
			}else{
				t.push_back(a);
			}
		}
		while(cin>>a>>b){
			if(a==0&b==0){
				cout<<"\n\n"<<t.size();
				cout<<"\n\n";
				dfs(tree,root);
				if(t.size()<2){
					cout<<"Case "<<s<<" is not a tree.\n";
					edge=0;
					break;
				}
					
				if(spot-1==edge){
					cout<<"Case "<<s<<" is not a tree.\n";
				}else{
					cout<<"Case "<<s<<" is a tree.\n";
				}
				break;
			}
			tree[a].push_back(b);
			tree[b].push_back(a);
			int x=0,y=0;
			if(a==b){
				x++,y++;
			}else{
				for(vector<int>::iterator it=t.begin();it<t.end();it++){
					if(*it==a)
						x++;
					if(*it==b)
						y++;
				}
			}
			if(x==0)
				t.push_back(a);
			if(y==0)
				t.push_back(b);
		}
	}
}

