#include <bits/stdc++.h>
using namespace std;
string str1,str2;
int a[242],b[242],c[242];
int main(){
    cin>>str1>>str2;
    for(int i=str1.size()-1,j=1;i>=0;i--,j++){
        a[j]=str1[i]-'0';
    }
    a[0]=str1.size();
    for(int i=str2.size()-1,j=1;i>=0;i--,j++){
        b[j]=str2[i]-'0';
    }
    b[0]=str2.size();
    c[0]=max(str1.size(),str2.size());
    for(int i=1;i<=c[0];i++){
        c[i]+=a[i]+b[i];
        if(c[i]>=10){
            c[i]-=10;
            c[i+1]++;
        }
    }
    if(c[c[0]+1]>0){
        c[0]++;
    }
    for(int i=c[0];i>=1;i--){
        cout<<c[i];
    }
    return 0;
}
