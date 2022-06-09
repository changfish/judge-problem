#include <iostream>

using namespace std;

int main() {
	int N,T;
	while(cin>>N>>T){
		int sum=1,day=1;
		if(T){
			T/=N;
			N/=N;
			while(sum!=T){
				day++;
				sum=2*sum+1;
			}
			cout<<day<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
