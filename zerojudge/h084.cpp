#include <iostream>
#include <vector>
using namespace std;

vector<int> w,h;

int test(int x){
	int index=0,c=0,i=0;
	while(i<=h.size() && h[i]<x)	i++;
	if(i>=h.size())	return 0;
	while(i<h.size()){
		c = w[index];
		while(h[i]>=x){
			c--;
			i++;
			if(!c){
				index++;
				c = w[index];
			}
			if(index>=w.size())	return 1;
		}
		i++;
	}
	return 0;

}

int main() {
  	int n,k,tem,maxn;
  	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>tem;
		h.push_back(tem);
		maxn = max(tem,maxn);
	}
	for(int i=0;i<k;i++){
		cin>>tem;
		w.push_back(tem);
	}
	int l = 0,r = maxn,mid;

	while(l<r){
		mid = (l+r)/2;
		if(test(mid))	{
			maxn = mid;
			l = mid+1;
		}
		else r = mid;
		if(test(r))	maxn = r;
	}
	cout<<maxn;
}
