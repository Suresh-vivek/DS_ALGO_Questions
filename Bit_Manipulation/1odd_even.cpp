#include <iostream>
using namespace std;

/*
Every odd number has last bit  = 0
Every even number has last bit = 1

Here we will check if number&1 = 1 then it is odd otherwise even
*/
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n&1){
        cout<<"Odd"<<endl;

    }
    else{
        cout<<"Even"<<endl;
    }
    return 0;
}