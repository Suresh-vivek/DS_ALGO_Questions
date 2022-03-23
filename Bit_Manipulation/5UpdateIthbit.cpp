#include <iostream>
using namespace std;

void clearIthBit(int &n,int i){
    int mask = ~(1<<i);
    n = n & mask;
}
void updateIthBiit(int &n,int i,int v){
    clearIthBit(n,i);
    int mask = (v<<1);
    n = n | mask; 
}
int main(){
    int n,i,v;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;
    cout<<"Enter value to be updated : ";
    cin>>v;
    updateIthBiit(n,i,v); 
    cout<<n<<endl;
}