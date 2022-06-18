#include <iostream>
#include <list>
using namespace std;

int main(int argc, char** argv) {
	int n,p,k=2;
	list<int>a;
	cin>>n;
	while(n--){
		cin>>p;
		a.clear();
		for(int i=1;i<=p;i++){
			a.push_back(i);
		}
		while(a.size()>3){
			int cnt=1;
			for(list<int>::iterator it=a.begin();it!=a.end();){
				if(cnt%k==0){
					it=a.erase(it);
				}else{
					it++;
				}
				cnt++;
			}
			k=(k==2?3:2);
		}
		for(list<int>::iterator it=a.begin();it!=a.end();){
			if(it!=a.begin()) cout<<" ";
			cout<<*it;
			it++;
		}
		cout<<endl;
	}
}
