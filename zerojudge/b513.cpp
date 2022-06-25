#include <iostream>

using namespace std;

#define max 65536
bool prime[max];

int main(int argc, char** argv) {
	for(int i=0;i<max;i++){
		prime[i]=true;
	}
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i<max;i++){
		if(prime[i]){
			for(int j=2*i;j<max;j+=i)
				prime[j]=false;
		}
	}
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		if(prime[x]){
			cout<<"Y\n";
		}else{
			cout<<"N\n";
		}
	}
}
