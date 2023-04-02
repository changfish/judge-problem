#include <iostream>
using namespace std;


int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int bit=1,n,a;
	while(cin>>n){
		bit=1,a=1;
		while(a%n){
			a = 10*(a%n)+1;
			bit++;
		}
		cout<<bit<<endl;
	}
}
