#include <iostream>
using namespace std;

int getIthBit(int n,int i){
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
}

int main(){
    int n,i;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;

    cout<<getIthBit(n,i)<<endl;
}