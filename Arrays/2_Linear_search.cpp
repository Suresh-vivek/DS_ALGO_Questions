#include <iostream>
using namespace std;

int Linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;

        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the element to be searched :";
    cin>>key;

    int index = Linear_search(a,n,key);
    if(index != -1){
        cout<<key <<" is present at index "<<index<<endl;
    }
    else{
        cout<<key <<" is NOT  found "<<endl;
    }


    return 0;
  
}