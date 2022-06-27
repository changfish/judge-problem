#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n,x;
	cin>>x;
	while(x--){
		cin>>n;
		int A[n],B[n];
		for(int i=0;i<n;i++){
			B[i]=0;
			cin>>A[i];
			if(i){
				if(B[i-1]>0){
					B[i]=B[i-1]+A[i];
				}else{
					B[i]=A[i];
				}
			}else{
				B[i]=A[i];		
			} 	 
		}
		int max=B[0];
		for(int i=1;i<n;i++){
			if(B[i]>max)
				max=B[i];
		}
		cout<<max<<endl;
	}
	
}
