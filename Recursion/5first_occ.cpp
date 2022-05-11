#include <iostream>
using namespace std;

int FirstOcc(int arr[],int n,int key){

    // Base Case
    if(n==0){
        return -1;
    }

    //Recursive case

    if(arr[0]== key){
        return 0;
    }

    int subindex = FirstOcc(arr + 1, n-1,key);

    if(subindex!=-1){

        return subindex + 1;
    }
    
    return -1;

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

    
    
    cout<<"Index of key is: "<<FirstOcc(a,n,key)<<endl;
}