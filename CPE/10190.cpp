#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	long long m,n,i,cn1;
	while(cin>>m>>n){
		list<long long> cn;
		cn1=n;
		cn.push_back(1);
		for(i=1;cn1<m&&n>1;i++){
			cn1=pow(n,i);
			cn.push_front(cn1);
		}
		if(cn1>m|n<=1){
			cout<<"Boring!"<<endl;
		}else{
			for(list<long long>::iterator it=cn.begin();it!=cn.end();it++){
				cout<<*it<<" ";
			}
			cout<<endl;
		}
	}
}
