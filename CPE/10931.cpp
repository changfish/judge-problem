#include <iostream>
#include <vector>
using namespace std;


int main(){
	int a;
	while(cin>>a&&a){
		int sum=0;
		vector<int>t;
		while(a!=0){
			sum+=a%2;
			t.insert(t.begin(),a%2);
			a/=2;
		}
		cout<<"The parity of ";
		for(vector<int>::iterator it=t.begin();it<t.end();it++){
			cout<<*it;
		}
		cout<<" is "<<sum<<" (mod 2)."<<endl;
	}
}
