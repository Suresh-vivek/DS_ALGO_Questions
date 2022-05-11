#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void merge(vector<int> &arr,int s,int e){

    int i = s;
    int m = (s+e)/2;
    int j = m+1;
    
    vector <int> temp;
    while(i<=m  and j<=e){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;

        }

        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // filling remaining elements
    while(i<=m){
        temp.push_back(arr[i++]);
    }

    while(j<=e){
        temp.push_back(arr[j++]);
    }

    int k = 0;

    for(int idx =s; idx <=e;idx++){
        arr[idx] = temp[k++];
    }

    return;

}

void merge_sort(vector<int> &arr,int s,int e){

    //base case
    if(s>=e){
        return ;
    }

    int mid = (s+e)/2;

    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    return merge(arr,s,e);
}

int main(){
    int n;
    cout<<"Enter number of elements in the array :";
    cin>>n;

    vector<int> array;

    for(int i = 0;i<n;i++){
        int y;
        cin>>y;
        array.push_back(y);
    }

    merge_sort(array,0,n-1);

    for(int i =0; i<n;i++){
        cout<<array[i]<<" ";
    }
}