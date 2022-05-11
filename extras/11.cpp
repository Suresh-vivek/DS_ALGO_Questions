#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        string num;
        cin>>num;
        int cnt=0;

        for(int i=0;i<d;i++){
            if(num[i]=='0' or num[i]=='5'){
                cout<<"YES"<<endl;
                cnt++;

                break;
            }

        }
        if(cnt==0){
            cout<<"NO"<<endl;
        }





    }
}