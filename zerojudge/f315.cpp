#include <iostream>
#include <cstring> 
using namespace std;

const int N = 2e5+5;
int bit[N];

void modify(int pos,int val){
	while(pos<N){
		bit[pos] +=val;
		pos += pos&(-pos);
	}
}

int query(int pos){
	int res=0;
	while(pos){
		res += bit[pos];
		pos -= pos &(-pos);
	}
	return res;
}


int main() {
	int n;
	long long ans=0;
	cin>>n;
	int arr[2*n],pos[n+1];	//pos can record the last point
	memset(arr,0,sizeof(arr));
	memset(pos,-1,sizeof(pos));

	for(int i=0,tem;i<2*n;i++){
		cin>>tem;
		arr[i] = query(tem-1);	//do not count itself
		if(pos[tem] == -1){
			pos[tem] = i;
		}else{
			ans += arr[i]-arr[pos[tem]];
		}
		modify(tem,1);
	}
	cout<<ans;
}
