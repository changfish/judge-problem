#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int sum1,sum2=0,b,n,bt=0;
	cin>>b>>n;
	sum1=n;
	while(sum1/=10)	bt++;
	bt++;
	for(int i=0;i<bt;i++){
		sum1+=pow((n%10),bt);
		sum2+=(n%10)*pow(b,i);
		n/=10;
	}
	if(sum1==sum2){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
