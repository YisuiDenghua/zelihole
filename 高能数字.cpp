#include<bits/stdc++.h>
using namespace std;
int m,t,ans,minusnum=0;
int main(){
	cin>>m>>t;
	ans=m;
	for(int i=1;i<=m;i++){
		if(m/10||m%10==3){
			minusnum++;
		}
	}
	ans-=minusnum;
	cout<<ans<<endl;
	return 0;
}
