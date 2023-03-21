#include <iostream>
#include <map>
using namespace std;

int main(){
	int n,tem;
	map<int,int> ans;
	cin>>n;
	while(n--){
		cin>>tem;
		tem = (tem%1000)/10;
		ans[tem]++;
	}
	for(map<int,int>::iterator it=ans.begin();it!=ans.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}
