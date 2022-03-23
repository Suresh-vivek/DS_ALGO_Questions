#include <iostream>
using namespace std;

void clearBitsInRange(int &n,int i,int j){
    int a= (~0)<<(j+1);
    int b = ~(-1<<i);
    int mask = a|b;
    n = n & mask;
}

int main(){
    int n,i,j;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the ith position : ";
    cin>>i;
    cout<<"Enter the jth position : ";
    cin>>j;
    
    clearBitsInRange(n,i,j); 
    cout<<n<<endl;
}