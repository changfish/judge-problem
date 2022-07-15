#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n;
	cin>>n;
	int A[n][2];
	vector<int> v[n];
	for(int i=0;i<n;i++){
		cin>>A[i][0]>>A[i][1];
	}
	for(int i=1;i<n;i++){
		int t0=A[i][0],t1=A[i][1];
		int j=i-1.;
		while(j>=0 && t0<A[j][0]){
			A[j+1][0]=A[j][0];
			A[j+1][1]=A[j][1];
			j--;
		}
		A[j+1][0]=t0;
		A[j+1][1]=t1;
	}
	int i=0;
	v[0].push_back(A[0][0]);
	v[0].push_back(A[0][1]);
	for(int j=1;j<n;j++){
		if(A[j][0]<=v[i][1]){
			if(A[j][1]>=v[i][1])
				v[i][1]=A[j][1];
		}else{
			i++;
			v[i].push_back(A[j][0]);
			v[i].push_back(A[j][1]);
		}
	}
	int sum=0;
	for(int j=0;j<=i;j++){
		sum += (v[j][1]-v[j][0]);
	}
	cout<<sum;
}
