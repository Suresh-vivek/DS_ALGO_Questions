/*
begin(),end()
*/

#include <iostream>
using namespace std;
#include <vector>

int main(){
    
    vector<int> myvector;    // empty vector
    for(int i =0; i<=5;i++){
        myvector.push_back(i);
    }

    cout<<"myvector contains : ";
    for(vector<int> :: iterator it = myvector.begin();it != myvector.end();++it){
        cout << *it <<" ";
    }
    cout<<endl;

    return 0;
}