/*
Kadane's Algorithm has a limitaion -> if all numbers are negative it returns
0 instead of least negative number.

Here I am writing an optimized kadane's Algorithm that can be used in negative
number arrays also.
*/

#include <iostream>
#include <climits>
using namespace std;

int Max_Sum(int arr[],int n){

    int maximun = INT_MIN, cur_sum =0;

    for(int i=0;i<n;i++){
        cur_sum += arr[i];
        if(maximun < cur_sum){
            maximun = cur_sum;
        }
        cur_sum = max(cur_sum,0);

    }

    return maximun;
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