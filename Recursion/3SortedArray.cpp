#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
    //Base Case
    if (n==0 or n==1){
        return true;
    }
    //Recursive Case
    if(arr[0]<arr[1]  and  isSorted(arr+1,n-1)){
        return true;
    }

    return false;

}
bool isSortedtwo(int arr[],int i,int n){
    //Base Case
    if(i== n-1){

        return true;
    }
    
    //Recursive Case
    if(arr[i]<arr[i+1] and isSortedtwo(arr,i+1,n)){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter number of elements in Array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(isSorted(a,n)){
        cout<<"ARRRAY is Sorted "<<endl;
    }
    else{
        cout<<"ARRAY is not Sorted "<<endl;
    }
    if(isSortedtwo(a,0,n)){
        cout<<"ARRRAY is Sorted "<<endl;
    }
    else{
        cout<<"ARRAY is not Sorted "<<endl;
    }
    
}