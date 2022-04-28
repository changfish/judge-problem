#include <iostream>

using namespace std;


int main() {
	int A[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char n;
	while(cin>>n){
		int sum=0,b;
		char a;
		b=A[int(n)-'A'];
		sum+=b/10+(b%10)*9;
		for(int i=8;i>=1;i--){
			cin>>a;
			sum+= ((a-'0')*i);
		}
		cin>>a;
		sum+=(a-'0');
		if(!(sum%10)){
			cout<<"real"<<endl;
		}else{
			cout<<"fake"<<endl;
		}
	}
}

