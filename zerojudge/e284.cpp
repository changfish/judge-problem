#include <iostream>
using namespace std;


int main() {
	int n,i;
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	while(scanf("%d",&n)!=EOF){
		if(n && !(n&(n-1))==1)
				printf("Yes\n");
			else
				printf("No\n");		
	}
}
