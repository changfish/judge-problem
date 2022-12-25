#include <iostream>
using namespace std;
#define ll long long

int pos=0;
string s;

ll rc(int n){
	if(s[pos] == '1'){
		return n*n;
	}else{
		if(s[pos] == '2'){
			int ans=0;
			for(int i=0;i<4;i++){
				pos++;
				ans+= rc(n/2);
			}
			return ans;
		}else{
			return 0;
		}
	}
}


int main(){
	cin>>s;
	int n;
	cin>>n;	//n = 2^k
	cout<<rc(n);
}
 
