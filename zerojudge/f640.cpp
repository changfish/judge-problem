#include <iostream>
using namespace std;
#define ll long long 

int atoi(string s){
	int sum=0,bit=1;
	if(s[0]=='-'){
		for(int i=s.length()-1;i>=1;i--){
			sum+=(s[i]-'0')*bit;
			bit*=10;
		}
		return sum*(-1);
	}else{
		for(int i=s.length()-1;i>=0;i--){
			sum+=(s[i]-'0')*bit;
			bit*=10;
		}
		return sum;
	}
}

ll eval(){
	int x,y,z;
	string s;
	cin>>s;
	if(s[0]=='f'){
		x=eval();
		return 2*x-3;
	}else{
		if(s[0]=='g'){
			x=eval();
			y=eval();
			return 2*x+y-7;
		}else{
			if(s[0]=='h'){
				x=eval();
				y=eval();
				z=eval();
				return 3*x-2*y+z;
			}else{
				return atoi(s);
			}
		}
	}
} 

int main() {
	cout<<eval();
}
