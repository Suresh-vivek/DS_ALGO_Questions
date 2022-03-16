/*
vector_name.empty();
Returns whether vector is empty(i.e it's size is 0)
true if the container size is  0, false otherwise
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
   
   vector<int> myvector;

   for(int i =0; i<=10;i++){
       myvector.push_back(i);
   }

   int sum =0;
   while(!myvector.empty()){
       sum+= myvector.back();
       myvector.pop_back();
   }

   cout<<"Sum  is : "<<sum<<endl;


    return 0;
}