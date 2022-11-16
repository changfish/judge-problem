#include <iostream>
#include <map> 
using namespace std;


int main(){
	map<string,int> list;
	int n;
	string country,name;
	cin>>n;
	cin.ignore();
	while(n--){
		cin>>country;
		cin.ignore();
		getline(cin,name);
		list[country]++;
	}
	for(map<string,int>::iterator it = list.begin();it!=list.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}
