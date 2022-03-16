/*
.size() return the number of elements in the vector
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> myints;
    cout <<" size is : "<<myints.size()<<endl;

    for(int i=0; i<10;i++){
        myints.push_back(i);
    }
    cout <<" size is : "<<myints.size()<<endl;  // size is 10

    myints.insert(myints.end(),10,100);
    cout <<" size is : "<<myints.size()<<endl; // size is 20
    
    myints.pop_back();
    cout <<" size is : "<<myints.size()<<endl;  // size is 19
    
    // Maximum size
    cout <<"maximum  size is : "<<myints.max_size()<<endl;
    
    // capacity
    cout <<"Capacity is : "<<myints.capacity()<<endl;
    

}