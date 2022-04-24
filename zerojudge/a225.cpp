#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=n;i>0;i--){
			for(int j=0;j<i-1;j++){
				if(A[j]%10>A[j+1]%10){
					int t=A[j+1];
					A[j+1]=A[j];
					A[j]=t;
				}
			}
		}
		for(int i=n;i>0;i--){
			for(int j=0;j<i-1;j++){
				if((A[j]%10==A[j+1]%10)&&(A[j]/10<A[j+1]/10)){
					int t=A[j+1];
					A[j+1]=A[j];
					A[j]=t;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
}
