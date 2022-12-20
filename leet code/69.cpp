#include <iostream>
using namespace std;

int main(){
	long bit = 1l<<16;
	long long ans=0;
	int n;
	cin>>n;
	while(bit>0){
		ans |= bit;	//跑過每個位元
		if(ans*ans>n){
			ans ^= bit; //若太大 就換下一個位元
		} 
		bit >>= 1;
	}
	cout<<ans<<endl;
}
