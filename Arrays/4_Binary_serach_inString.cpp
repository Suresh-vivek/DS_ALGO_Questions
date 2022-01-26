#include <iostream>
using namespace std;
#include <string>
#include <bits/stdc++.h>

int Binary_Search_string(string arr[],int n, string key){
    int s,e,m;
    s=0,e=n-1;

    while(s<=e){
        if(arr[m]== key){
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
    int n;
    string key;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the element to be searched :";
    cin>>key;

    int index = Binary_Search_string(a,n,key);
    if(index != -1){
        cout<<key <<" is present at index "<<index<<endl;
    }
    else{
        cout<<key <<" is NOT  found "<<endl;
    }


    return 0;
  
}