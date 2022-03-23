#include <iostream>
using namespace std;

void setIthBit(int &n,int i){
    int mask = (1<<i);
    n = n | mask;
}
int main(){
    int n,i;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;
    setIthBit(n,i);
    cout<<n<<endl;
}