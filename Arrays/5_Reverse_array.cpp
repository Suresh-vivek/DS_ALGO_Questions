#include <iostream>
using namespace std;

void Reverse_array(int arr[],int n){
    int s=0,e=n-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
}

int main(){

    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    Reverse_array(a,n);

    cout<<"Reversed Array is: "<<endl;

    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;


    return 0;
}