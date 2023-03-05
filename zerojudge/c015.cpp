#include <iostream>
#include <algorithm>

using namespace std;
#define ll long long 

ll whstoi(string s){
	ll sum=0,bit=1;
	for(int i=s.size()-1;i>=0;i--){
		sum+=(s[i]-'0')*bit;
		bit*=10;
	}
	return sum;
}

string itos(ll c){
	string s="";
	while(c){
		s.insert(s.begin(),char(c%10+'0'));
		c/=10;
	}
	return s;
}

int main(){
	int i,N,P,isre,tem;
	string retem;
	cin>>N;
	while(N--){
		cin>>P;
		i=0;
		isre=0;
		tem = P;
		while(!isre){
			retem=itos(tem);
			reverse(retem.begin(),retem.end());
			tem += whstoi(retem);
			retem=itos(tem);
			reverse(retem.begin(),retem.end());
			if((itos(tem)==retem)){
				isre=1;
			}
			i++;
		}
		cout<<i<<" "<<tem<<endl;
	}
}
