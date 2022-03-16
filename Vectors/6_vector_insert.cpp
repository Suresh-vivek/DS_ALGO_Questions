#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> myvector(3,100);  // fill constructor

    vector<int> :: iterator it;
    it = myvector.begin();
    it = myvector.insert(it,200);  // 200 100 100 100
    myvector.insert(it,2,300);// 300 300 200 100 100 100
    
    // "it " no longer valid get a new one
    it = myvector.begin();

    vector<int> anothervector(2,400);
    myvector.insert(it+2,anothervector.begin(),anothervector.end()); // 300 300 400 400 200 100 100 100

    int myarray[] = {501,502,503};
    myvector.insert(myvector.begin(),myarray,myarray +3);

    for(it = myvector.begin();it!= myvector.end();it++){
        cout << *it <<" ";
    }
    cout<<endl;

    // 501 502 503 300 300 400 400 200 100 100 100



    return 0;
}