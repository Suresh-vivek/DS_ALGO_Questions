#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string str;
    cout<<"Enter a string : ";
    cin>> str;

    int i=0,j= str.length()-1;

    char tmp;

    while(i<j){

        tmp= str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    
    cout << str;
    return 0;
}