#include <iostream>
using namespace std;

const int maxn = 1e6+1;
int A[maxn];

int tstoi(string s){
	int ans=0;
	for(int i=0;i<s.size();i++){
		ans+=int(s[i]-'0');
		ans*=10;
	}
	return ans/10;
}
int restoi(string s){
	int ans=0;
	for(int i=s.size()-1;i>=0;i--){
		ans+=int(s[i]-'0');
		ans*=10;
	}
	return ans/10;
}

int main(){
	for(int i=0;i<maxn;i++)	A[i]=1;
	for(int i=2;i<maxn;i++){
		if(A[i]){
			for(int j=2*i;j<maxn;j+=i){
				A[j]=0;
			}
		}
	}
	A[0]=1;
	A[1]=1;
	A[2]=1;
	string s;
	while(cin>>s){
		int tem = tstoi(s);
		int retem = restoi(s);
		cout<<s<<" is ";
		if(A[tem]){
			if(A[retem] && retem != tem){
				cout<<"emirp.\n";
			}
			else{
				cout<<"prime.\n";
			}
		}else{
			cout<<"not prime.\n";
		}
	}
}
