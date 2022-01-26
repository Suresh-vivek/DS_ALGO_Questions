#include <iostream>
using namespace std;

void Print_pairs(int arr[],int n){

    for(int i=0;i<n;i++){
        int x= arr[i];

        for(int j=i+1;j<n;j++){
            int y= arr[j];
            cout<<"("<<x<<","<<y<<")"<<" ";
        }
        cout<<endl;
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

    Print_pairs(a,n);



    return 0;
}