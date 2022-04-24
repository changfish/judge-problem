#include <iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	long long A=0,B;
	for(int i=0;i<n;i++){
		cin>>B;
		A+=B;
		cout<<A<<" ";
	}
}
