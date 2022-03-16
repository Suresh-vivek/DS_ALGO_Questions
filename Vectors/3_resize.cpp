/*
resize(n,val);
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
   
   vector<int> myvector;

   for(int i =0; i<10;i++){
       myvector.push_back(i);
   }

   myvector.resize(5);
   myvector.resize(8,100);  // 0 1 2 3 4 100 100 100
   myvector.resize(12);     // 0 1 2 3 4 100 100 100 0 0 0 0


   for(int i=0;i<myvector.size();i++){
       cout<<myvector[i]<<" ";
   }


    return 0;
}