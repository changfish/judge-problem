#include <iostream>

using namespace std;

int main() {
	int n,m;
	while(cin>>n>>m){
		int l,r;
		int A[n+1];
		A[0]=0;
		for(int i=1;i<n+1;i++){
			cin>>A[i];
			A[i]+=A[i-1];
		}
		for(int i=0;i<m;i++){
			cin>>l>>r;
			l--;
			cout<<A[r]-A[l]<<endl;

		}
		cout<<endl;
	}
}

