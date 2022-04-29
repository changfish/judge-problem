#include <iostream>
using namespace std;

void sort(int *A,int size){
	
	for(int i=1;i<size;i++){
		int t=A[i];
		int j=i-1;
		while(j>=0&&t<A[j]){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=t;
	}
}

int main() {
	ios::sync_with_stdio(false);  //緩衝
	cin.tie(NULL);
	int n;
	while(cin>>n){
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];	
		}
		sort(A,sizeof(A)/sizeof(A[0]));
		for(int i=0;i<n;i++)
			cout<<A[i]<<" ";
		cout<<endl;
	}

}

