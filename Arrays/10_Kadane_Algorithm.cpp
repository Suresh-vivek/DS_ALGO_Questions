/*
Approach -> Kadane's Algorithm
Time Complexity -> O(N)
*/

#include <iostream>
#include <climits>
using namespace std;

int Max_Sum(int arr[],int n){
    int maximum = INT_MIN;
    int cur_sum=0;

    for(int i=0;i<n;i++){
        cur_sum += arr[i];

        cur_sum = cur_sum >0 ? cur_sum : 0;
        maximum = max(cur_sum,maximum);
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