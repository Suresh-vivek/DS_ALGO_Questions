#include <iostream>
using namespace std;

int lastOcc(int arr[],int n,int key){

    // Base Case
    if(n==0){
        return -1;
    }

    int index = lastOcc(arr +1,n-1,key);

    if(index == -1){
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return index +1;
    }
}

int main(){
    int n;
    cout<<"Enter number of elements in Array : ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter the key : ";
    cin>>key;

    
    
    cout<<"Index of key is: "<<lastOcc(a,n,key)<<endl;
}