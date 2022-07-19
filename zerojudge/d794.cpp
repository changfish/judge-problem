#include <iostream>
#include <cstring> 
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e5+5;
int bit[N];
vector<long long> v,b;


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
	while(cin>>n){
		memset(bit,0,sizeof(bit));
		v.clear();
		for(int i=0,tem;i<n;i++){
			cin>>tem;
			v.push_back(tem);
		}
		b = v;		//b用來排序&搜尋用
		sort(b.begin(),b.end());
		for(int i=0;i<n;i++){
			int idx = lower_bound(b.begin(),b.end(),v[i])-b.begin()+1;	//Â÷´²¤Æ
			idx = n-idx+1;
			modify(idx,1);
			cout<<query(idx)<<endl;
		}
	}
}
