#include <iostream>
using namespace std;

void sort(int*,int);

int main() {
	int N,K,T;
	cin>>N>>K>>T;
	int s[2]={0,0};
	for(int i=0;i<N;i++){
		int A[K];
		s[0]=0;
		for(int j=0;j<K;j++)
			cin>>A[j];
		sort(A,K);
		for(int j=1;j<K-1;j++){
			s[0]+=A[j]-T;
		}
		if(s[0]>=0){
			s[1]++;
			cout<<i<<endl;
		}
	}
	if(s[1]==0)
		cout<<"A is for apple.";
}

void sort(int *A,int K){
	for(int i=1;i<K;i++){
		int t=A[i];
		int j=i-1;
		while(j>=0&&t<A[j]){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=t;	
	}
}
