
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> s,if_s(20001,1);
	for(int i=2;i<20001;i++){
		if(if_s[i]) s.push_back(i);
		for(int j:s){
			if(j*i>20000) break;
			if_s[j*i]=0;
			if(i%j==0) break;
		}
	}
	int p=0;
	while(p<s.size()){
		for(int i=0;i<4;i++){
			if(p==s.size()){
				cout<<endl;
			}
			cout<<s[p]<<' ';
			p++;
		}
		cout<<s[p]<<endl;
		p++;
	}
	return 0;
}