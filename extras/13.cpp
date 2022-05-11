#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if((abs(a-b)>2) or (a==b)){
            cout<<" "<<endl;
        }
        else if(a<b){
            float x= (float) n;
            int y = 2/x;

 
            float res = y * n;
            int res1 = (int) res; 
            

            cout<<res<<endl;


        }
        else{
            cout<<1<<endl;

        }
    }
}