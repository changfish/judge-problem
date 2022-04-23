#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int k,n;
    cin>>k;
    n=int((-1+sqrt(1+8*k))/2);
    for(int i=n-10;i<=n+10;i++){
    	int sum=(i)*(i+1)/2;
    	if((sum>k)&&(i>0)){
    		cout<<sum-k<<" "<<i;
    		break;
	}else{
		if(i<=0)
			n+=10;
		}
	}
}
