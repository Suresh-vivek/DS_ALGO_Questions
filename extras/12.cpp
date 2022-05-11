#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
      cin>>n;
      int cnt=0;
      int x=n;
      while(x>0){
          int a = x%10;
          if(a==9){
             cnt++; 
              
          }
          x=x/10;
      }
      if(cnt&1){
          cout<<n+2<<endl;
      }
      else{
          cout<<n+1<<endl;
      }
    }
    return 0;
}