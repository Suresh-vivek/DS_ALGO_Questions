#include <iostream>
using namespace std;

int count_bits(int n){
    int count =0;
    while(n>0){
        int last_bit = (n&1);
        count+= last_bit;
        n=n>>1;
    }
    return count;

}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<count_bits(n)<<endl; 
}