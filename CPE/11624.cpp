#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

const int sz=1001;
char A[sz][sz];
int J[sz][sz],F[sz][sz];
const int dir[8]={-1,0,1,0,0,-1,0,1};//delta y, delta x

void BFS_J(int x,int y){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	while(q.size()){
		x=q.front().first;
		y=q.front().second;
		
		for(int i=0;i<4;i++){
			int nx=x+dir[2*i+1];
			int ny=y+dir[2*i];
			if(A[ny][nx]=='.'){
				if(J[ny][nx]==1002)	{
					q.push(make_pair(nx,ny));
				}
				J[ny][nx]=min(J[ny][nx],J[y][x]+1);
			}
		}
		q.pop();
	}
}

void BFS_F(int x,int y){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	while(q.size()){
		x=q.front().first;
		y=q.front().second;
		
		for(int i=0;i<4;i++){
			int nx=x+dir[2*i+1];
			int ny=y+dir[2*i];
			if(A[ny][nx]=='.'){
				if(F[ny][nx]==1002)	q.push(make_pair(nx,ny));
				F[ny][nx]=min(F[ny][nx],F[y][x]+1);
			}
		}
		q.pop();
	}
}

int main(){
	int m,n,t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		pair<int,int>	J_f,F_f;	//(y,x)
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				F[i][j]=J[i][j]=1002;
				cin>>A[i][j];
				if(A[i][j]=='J'){
					J_f.first=i;
					J_f.second=j;
					J[i][j]=0;
				}else if(A[i][j]=='F'){
					F_f.first=i;
					F_f.second=j;
					F[i][j]=0;
				}
			}
		}
		BFS_J(J_f.second,J_f.first);
		BFS_F(F_f.second,F_f.first);
		int flag=0,ans=1002;
		for(int i=0;i<m;i++){
			if(J[i][0]<F[i][0]){
				flag=1;
				ans=min(ans,J[i][0]);
			}
			if(J[i][n-1]<F[i][n-1]){
				flag=1;
				ans=min(ans,J[i][n-1]);
			}
		}
		for(int i=0;i<n;i++){
			if(J[0][i]<F[0][i]){
				flag=1;
				ans=min(ans,J[0][i]);
			}
			if(J[m-1][i]<F[m-1][i]){
				flag=1;
				ans=min(ans,J[m-1][i]);
			}
		}
		if(flag)	cout<<ans+1<<endl;
		else cout<<"IMPOSSIBLE\n";
	}
	
	
}


