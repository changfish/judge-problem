#include <iostream>

using namespace std;


int recur(string s){
	int sum=0;
	for(int i=0;i<s.size();i++){
		if(i&1){
			sum+=int(s[i]-'0');
		}else{
			sum-=int(s[i]-'0');
		}
	}
	if(sum<0)	sum*=-1;
	return sum;
}


int main(){
	int tem;
	string s;
	while(cin>>s&&s!="0"){
		tem = recur(s);
		if(!(tem%11)){
			cout<<s<<" is a multiple of 11.\n";
		}else{
			cout<<s<<" is not a multiple of 11.\n";
		}
	}
}
