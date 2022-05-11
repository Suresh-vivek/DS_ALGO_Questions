#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    int t;
    while(t--){
        long long int n;
        cin>>n;
    long long int a,b;
    cin>>a>>b;
    if(abs(a-b)>2){
        cout<<0<<endl;}
    if(abs(a-b)==2)
    {
        if(max(a,b)-1<=n)
        {
            cout<<1<<endl;
        }
    }
    if(a>b)
    {
        if(b==1)
        {
            if((a+1)<=n){cout<<1<<endl;}
            cout<<0<<endl;
        }
        if((a+1)<=n and (b-1)<=n)
        {
            cout<<2<<endl;
        }
        if((a+1)<=n or (b-1)<=n)
        {
            cout<<1<<endl;
        }
        cout<<0<<endl;
    }
    if(b>a)
    {
        if(a==1)
        {
            if((b+1)<=n){cout<<1<<endl;}
            cout<<0<<endl;
        }
        if((a-1)<=n and (b+1)<=n)
        {
            cout<<2<<endl;
        }
        if((a-1)<=n or (b+1)<=n)
        {
            cout<<1<<endl;
        }
        cout<<0<<endl;
    }
}
}
