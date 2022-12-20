#include <iostream>
using namespace std;



int main(){
	int n,k;
	cin>>n>>k;
	int A[n],B[k];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<k;i++){
		cin>>B[i];
	}
	for(int key=0;key<k;key++){
		int l=0,r=n,mid,flag=1;
		while(l<=r){
			mid = (l+r)/2;				//1 2 3 4 5
			if(A[mid]==B[key]){
				flag=0;
				cout<<mid+1<<endl;
				break;
			}else{
				if(A[mid]>B[key]){
					r=mid-1;
				}else{
					l=mid+1;
				}
			}
		}
		if(flag)	cout<<'0'<<endl;
	}
}
 
