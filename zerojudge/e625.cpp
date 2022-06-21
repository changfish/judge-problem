#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	string s;
	string::iterator a,b;
	while(getline(cin,s)){
		a=s.begin(),b=s.begin();
		for(int i=0;i<s.length();i++){
			b++;
			if(s[i]==' '){
				reverse(a,b-1);
				a=b;	
			}	
			if(i==s.length()-1){
				reverse(a,b);
			}
		}
		cout<<s<<"\n";
	}
}
