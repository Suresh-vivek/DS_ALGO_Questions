#include <iostream>
using namespace std;
#include <climits>

/*
Approach -> BruteForce
Time Complexity -> O(n^3)
*/

int Max_Subarray_Sum(int arr[],int n){
    
    int maximum= INT_MIN;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            
            int cursum=0;
            for(int k=i;k<=j;k++){
                cursum+= arr[k];
                
            }
            maximum = max(cursum,maximum);

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

    cout << Max_Subarray_Sum(a,n);
    cout<< endl;



    return 0;
}