#include <iostream>
#include <vector>
using namespace std;

int main(){

   vector<int> first,second,third;
   
   first.assign(7,100);   // having 7 ints with value 100

   vector<int> :: iterator it;
   it = first.begin() + 1;

   second.assign(it , first.end()-1 );   // the 5 central elemets of first

   int myarray[] = {1,2,3};
   third.assign(myarray,myarray +3); // assigning from array

   cout << " Size of first is : "<<first.size()<<endl;
   cout << " Size of second is : "<<second.size()<<endl;
   cout << " Size of third is : "<<third.size()<<endl;

    return 0;
}