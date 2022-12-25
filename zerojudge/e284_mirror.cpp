#include <stdio.h>


int main(){
	int n=0;
	while(scanf("%d",&n)!=EOF){
		if(n == (n&(-n)) && n!=0){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}
