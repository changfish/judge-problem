#include <iostream>
using namespace std;

void to3(int n){
	if(n){
		to3(n/3);
		cout<<n%3;
	}
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	while(cin>>n && n>=0){
		if(!n)	cout<<0<<endl;
		else{
			to3(n);	
			cout<<endl;	
		}
	}
}
