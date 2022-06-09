#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n && n){
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		for(int i=0;i<n;i++){
			cout<<A[i];
			if(i!=n-1)
				cout<<" ";
		}
		cout<<endl;
	}
}
