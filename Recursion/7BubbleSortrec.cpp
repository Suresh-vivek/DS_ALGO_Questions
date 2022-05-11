#include <iostream>
using namespace std;

void Bubble_Sort_rec(int a[],int n){

    // Base case
    if(n==1){
        return;
    }

    // check condition (inner loop)

    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }

    // Recursive call 
    Bubble_Sort_rec(a,n-1);
}

void Bubble_Sort_rec2(int a[],int n,int j){
    
    //base case
    if(n==1){
        return;
    }

    if(j==n-1){
        Bubble_Sort_rec2(a,n-1,0);
        return;
    }

    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    Bubble_Sort_rec2(a,n,j+1);
}

int main(){
    int n;
    cout<<"Enter number of elements in Array : ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Bubble_Sort_rec2(a,n,0);

    cout<<"Sorted array is : "<<endl;

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}