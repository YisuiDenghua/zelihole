#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0;
string str;
void ofind(int n){
	for(int i=n;i<str.size();i++){
		if(str[i]=='W'){
			cnt++;
		}
	}
}
void cfind(int n){
	for(int i=n;i<str.size();i++){
		if(str[i]=='O'){
			ofind(i);
		}
	}
}
int main(){
	cin>>n>>str;
	for(int i=0;i<str.size();i++){
		if(str[i]=='C'){
			cfind(i);
		}
	}
	cout<<cnt<<endl;
	return 0;
}
