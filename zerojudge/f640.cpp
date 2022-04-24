#include <iostream>
#include <cstdlib>
using namespace std;

int m(){
	int x,y,z;
	char A[7];
	cin>>A;
	if(A[0]=='f'){
		x=m();
		return 2*x-3;
	}else{
		if(A[0]=='g'){
			x=m();
			y=m();
			return 2*x+y-7;
		}else{
			if(A[0]=='h'){
				x=m();
				y=m();
				z=m();
				return 3*x-2*y+z;	
			}else
				return atoi(A);
		}
	}
}

int main()
{
	cout<<m();
}
