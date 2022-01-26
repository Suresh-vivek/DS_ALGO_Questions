/*
Types of Constructors :-

1. Empty Constructor
2. Fill Constructor(n,val)
3. Range Constructor(first,last)
5. Copy Constructor(x)

n -> Number of elements , val -> Value of each elements
first , last -> Iterators
x -> another vector object
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Constructor in same order as above

    vector<int> first;             //Empty Constructor
    vector<int> second(4,100);     //vector having 4 ints with value 100
    vector<int> third(second.begin(),second.end()); //Iterating through second
    vector<int> fourth(third);                      // Copy of third

    //The range constructor can aslo be used in arrays
    int myints[] = {1,2,3,4,5};
    vector<int> fifth(myints,myints + sizeof(myints)/sizeof(int));

    cout<<"The contents of third are : ";
    for(int i =0; i<third.size();i++){
        cout<<third[i]<<" ";
    }
    cout << endl;

    cout <<"The contents of fifth are : ";
    for(vector<int> :: iterator it = fifth.begin(); it!= fifth.end();it++){

        cout<<*it<<" ";
    }
    cout<<endl;



}