#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	list<int> v;
	int n,a;
	cin>>n;
	while(n--){
		cin>>a;
		v.push_front(a);
	}
	for(list<int>::iterator it=v.begin(),itd=v.end()--;it!=v.end();it++){
		cout<<*it;
		if(it!=itd)
			cout<<" ";
	}
}
