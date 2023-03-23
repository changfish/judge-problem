#include <iostream>
#include <vector>
using namespace std;

int main(){
	string tem;
	vector<string> s;
	int maxn=0;
	while(getline(cin,tem)){
		s.push_back(tem);
		if(tem.size()>maxn)	maxn = tem.size();
	}
	for(int i=0;i<maxn;i++){
		for(int j=s.size()-1;j>=0;j--){
			if(s[j].size()>i)
				cout<<s[j][i];
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
