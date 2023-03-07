#include <iostream>

using namespace std;


int A[26];

string tos(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' && s[i]<='Z')
			s[i] = char('a'+int(s[i])-'A');
		A[int(s[i]-'a')]++;
	}
	return s;
}

string removes(string s){
	for(string::iterator it=s.begin();it!=s.end();it++){
		if(!(*it>='a'&&*it<='z')&&!(*it>='A'&&*it<='Z')){
			s.erase(it);
			it--;
		}
	}
	return s;
}


int main(){
	string s;
	int m;
	while(cin>>s){
		for(int i=0;i<26;i++)	A[i]=0;
		m=0;
		s = removes(s);
		s = tos(s);
		for(int i=0;i<26;i++){
			if(A[i]%2)
				m++;
		}
		if(m<=1){
			printf("yes !\n");
		}else{
			printf("no...\n");
		}
	}
}
