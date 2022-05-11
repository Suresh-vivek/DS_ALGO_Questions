#include <iostream>
using namespace std;

string spell[] = {"zero ","one ","two ","three ","four ","five ","six ","seven "," eight ","nine "};

int Number(int n){
    //base case
    if(n==0){
        return 0;
    }

    int x = n%10;
    Number(n/10);
    cout<<spell[x];
  

    
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    Number(n);
}