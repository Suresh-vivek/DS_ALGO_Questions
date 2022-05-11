#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];

        unordered_map <int ,int> mp;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int ans=0,cnt=0;
        for(auto x:mp){
            if(x.second %2 !=0){
                ans++;
            }
        }
        for(auto x:mp){
            cnt++;
        }
        cout<<"count  = "<<cnt<<endl;
        
        
        //case 1 if ans -odd ,cnt - even
        if(ans&1  and cnt%2==0){
            cout<<ans<<endl;
        }
        // case 2 if ans is odd, cnt -odd        
        else if(ans&1 and cnt&1){
            cout<<ans + 2<<endl;
        }

        //case 3 if ans is even , cnt even
        else if(ans%2==0 and cnt%2==0){
            cout<<ans<<endl;
        }
        else{
            cout<<ans+2<<endl;
        }

    }
}
