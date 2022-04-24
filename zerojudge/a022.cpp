#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	while(cin>>s){
		int a=s.length()/2,b,q=1;
		if(s.length()%2==0){
			b=a+1;
			while(a>=0){
				if(s[a-1]!=s[b-1]){
					q=0;
					break;
				}
				a--;
				b++;		
			}
		}else{
			b=a+2;
			while(a>=0){
				if(s[a-1]!=s[b-1]){
					q=0;
					break;
				}
				a--;
				b++;		
			}
		}
		if(q)
			cout<<"yes";
		else
			cout<<"no";
		cout<<endl;
	}
}
