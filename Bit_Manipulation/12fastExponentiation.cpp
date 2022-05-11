#include <iostream>
using namespace std;

int fastExpo(int a,int n){
    
    int ans=1;
    while(n>0){
        int last_bit = n&1;
        if(last_bit){
        ans = ans *a;

    }
       a = a * a;
       n = n>>1;
    }
    return ans;

}

int main(){
    int n,a;
    cout<<"Enter the Number : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>n;
    cout<<fastExpo(a,n)<<endl;
}