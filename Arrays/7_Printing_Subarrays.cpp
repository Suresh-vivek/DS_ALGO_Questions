#include <iostream>
using namespace std;

/*
Approach -> BruteForce
Time Complexity -> O(n^3)
*/

void Print_Subarrays(int arr[],int n){

    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){

            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" , ";
            }
            cout<<endl;

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

    Print_Subarrays(a,n);



    return 0;
}