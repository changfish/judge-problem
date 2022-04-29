#include <iostream>
#include <string>	
#include <vector>
using namespace std;


int main() {
	string s;
	vector<char> b;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
			b.insert(b.begin(),s[i]);
	}
	while(b[0]=='0'&b.size()>0)
		b.erase(b.begin());
	if(b[0]!='0'){
		for(vector<char>::iterator it=b.begin();it<b.end();it++){
			cout<<*it;
		}
	}else{
		cout<<"0";
	}
}

