#include <iostream>
using namespace std;
#include <vector>

int main(){

    vector<vector <int>> arr ={{1,2,3},{4,5,6},{7,8,9,10},{11,12,13}};
    // in 2D vector rows  and column number can be diifer

    // updating
    arr[0][1]+= 12;
    

    // printing values 
    for(int i =0;i<arr.size();i++){

        for(int number : arr[i]){
            cout << number <<" ";
        }
        cout<<endl;
    }

    

    return 0;
}