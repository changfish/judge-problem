#include <iostream>
#include <algorithm>
using namespace std;

int v[50001];

int enough(int k,int x,int n){		//greedy
	int end=-1,num=0;
	for(int i=0;i<n;){
		num++;
		if(num>k)	return 0;
		end = v[i]+x;
		if(v[n-1]<=end)	return 1;
		while(v[i]<=end){
			i++;
		}
	}
}

int main() {
	int l,r,n,k,t;
	cin.tie(0);
    ios_base::sync_with_stdio(0);
    
	while(cin >> n >> k ){
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v,v+n);
		l=1;
		r=v[n-1]-v[0];
		while(l!=r){
			int mid = (l+r)/2;
			if(enough(k,mid,n)){
				r=mid;
			}else{
				l=mid+1;
			}
		}
		cout<<r<<"\n";
	}
}
