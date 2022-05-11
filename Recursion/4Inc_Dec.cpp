#include <iostream>
using namespace std;

void dec(int n){
    //Base Case
    if(n==0){
        return;
    }

    //Recursive Case
    cout<<n<<",";
    dec(n-1);
    
}

void inc(int n){
    //base case
    if(n==0){
        return;
    }

    //Recursive Case
    inc(n-1);
    cout<<n<<",";
}

int main(){
    int n;
    cout<<" Enter the number : ";
    cin>>n;

    inc(n);
    cout<<endl;
    dec(n);
    cout<<endl;
}