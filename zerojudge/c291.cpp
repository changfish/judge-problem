#include <iostream>
using namespace std;

int sum=0;

void dfs(int now,int *A,int *B,int yn){	//yn判斷是走訪(0)還是起頭(1)模式 
	if(yn==0){
		if(B[now]==1){
			sum++;
		}else{
			B[now]++;
			dfs(A[now],A,B,0);	
			}
	}else{
		if(B[now]!=1){
			B[now]++;
			dfs(A[now],A,B,0);	
		}
	}
}

int main() {
	int N;
	cin>>N;
	int A[N],B[N]; //A儲存好友 B紀錄
	for(int i=0;i<N;i++){
		cin>>A[i];
		B[i]=0;
	}
	for(int i=0;i<N;i++){
		if(B[i]==0)
			dfs(i,A,B,1);
	}
	cout<<sum;
}

