#include <iostream>
using namespace std;

/*
Array should be sorted
Time complexity -> O(log N)
*/

int Binary_Search(int arr[],int n,int key){
    int s,e,m;
    s=0;
    e=n-1;

    while(s<=e){
        m= (s+e)/2;
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]>key){
            e=m-1;
        }
        else{
            s=m+1;
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

    int index = Binary_Search(a,n,key);
    if(index != -1){
        cout<<key <<" is present at index "<<index<<endl;
    }
    else{
        cout<<key <<" is NOT  found "<<endl;
    }


    return 0;
  
}