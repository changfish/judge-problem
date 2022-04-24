#include <iostream>
using namespace std;


int main() {
	int n,D,hd,hs,sum=0;
	cin>>n>>D;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	hd=A[0];
	hs=1;
	for(int i=1;i<n;i++){
		if((A[i]-hd)>=D&&hs==1){
			sum+=A[i]-hd;
			hs=0;
			hd=A[i];
		}
		if((hd-A[i])>=D&&hs==0){
			hs=1;
			hd=A[i];
		}
	}
	cout<<sum;
}
