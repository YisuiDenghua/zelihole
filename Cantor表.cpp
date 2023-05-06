#include <bits/stdc++.h>
using namespace std;
int stop_x(int n){
    int i;
    for(i=0;i<n;i++){
        n-=i;
    }
    if(i%2==0){
        return n;
    }else{
        return i+1-n;
    }
}
int stop_y(int n){
    int i;
    for(i=0;i<n;i++){
        n-=i;
    }
    if(i%2==0){
        return i+1-n;
    }else{
        return n;
    }
}
int main(){
    int n,c,u;
    cin>>n;
    c=stop_x(n);
    u=stop_y(n);
    for(int i=1,j=1,x=1,y=1;i<=n;){
        if(j%2!=0||i==1){
            do{
                cout<<x<<'/'<<y<<' ';
                if(x==c&&y==u){
                    return 0;
                }
                x--;
                y++;
                i++;
            }while(!(x==0||y==0));
            x++;
            j++;
            //i++;//
        }
        cout<<endl;
        if(j%2==0){
            do{
                cout<<x<<'/'<<y<<' ';
                if(x==c&&y==u){
                    return 0;
                }
                x++;
                y--;
                i++;
            }while(!(x==0||y==0));
            y++;
            j++;
            //i++;//
        }
        cout<<endl;
    }
}
/*
现代数学的著名证明之一是Georg Cantor证明了有理数是可枚举的。他是用这一张表来证明这一命题的：
1/1 1/2 1/3 1/4 1/5 … 2/1 2/2 2/3 2/4 … 3/1 3/2 3/3 … 4/1 4/2 … 5/1 … …
我们以Z字形给上表的每一项编号。第一项是1/1，然后是1/2，2/1，3/1，2/2，… 输入正整数N，输出表中的前N项。按直角三角形样式输出。每项以一个空格隔开（1≤N≤10000）。

输入格式
输入正整数N

输出格式
输出表中的前N项。