#include <iostream>
using namespace std;

int exponent(int x,int y , int mod){
    int ans=1;
    x = x%mod;
    if(x==0){
        return 0;
    }

    while(y>0){
        int lastbit = (y&1);
        if(lastbit){
            ans = (ans * x)%mod;

        } 
        x = (x*x)%mod;
        y = y>>1;
    }
    return ans;

}

int main(){
    int n,a,mod;
    cout<<"Enter the Number : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>n;
    cout<<"Enter the mod : ";
    cin>>mod;

    cout<<exponent(a,n,mod)<<endl;
}
