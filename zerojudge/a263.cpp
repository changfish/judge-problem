#include <iostream>

using namespace std;

bool cy(int y){
    if(y%4!=0 || (y%100==0 && y%400!=0)){
        return false;
    }
    return true;
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
	int prefix[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=1;i<13;i++){
		prefix[i]+=prefix[i-1];
//		cout<<prefix[i]<<endl;
	}
	int s1,y1,m1,d1,s2,y2,m2,d2;
	while(cin>>y1>>m1>>d1>>y2>>m2>>d2){
		y1--;
		y2--;
		s1 = y1*365+y1/4-y1/100+y1/400+prefix[m1-1]+d1;
		s2 = y2*365+y2/4-y2/100+y2/400+prefix[m2-1]+d2;
		y1++;
		y2++;
		if(cy(y1) && m1>2)	s1++;
		if(cy(y2) && m2>2)	s2++;
	//	cout<<s2<<endl<<s1;
		if(s2-s1>0){
			cout<<s2-s1<<endl;
		}else{
			cout<<s1-s2<<endl;
		}
	}
}
