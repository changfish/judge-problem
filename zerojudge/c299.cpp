#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int tem,current,max,min;
	cin>>tem;
	max=min=tem;
	for(int i=0;i<n-1;i++){
		cin>>current;
		if(current>max)	max=current;
		if(current<min)	min=current;
	}
	cout<<min<<" "<<max;
	if(max-min == (n-1))	cout<<" yes";
	else	cout<<" no";
}
