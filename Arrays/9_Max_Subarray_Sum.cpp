/*
Approach -> Prefix Sum
Time Complexity -> O(N^2)
*/

#include <iostream>
#include <climits>
using namespace std;

int Max_Sum(int arr[],int n){
    
    int prefix[n];
    prefix[0]= arr[0];
    int maximum = INT_MIN;
    
    // Prefix Sum Array
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    // Calculating Sum
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            int cur_sum= i>0 ? prefix[j] - prefix[i-1]:prefix[j];

            maximum = max(maximum,cur_sum);
        }
    }
    
    return maximum;
}

int main(){

    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout << Max_Sum(a,n);
    cout<< endl;



    return 0;
}