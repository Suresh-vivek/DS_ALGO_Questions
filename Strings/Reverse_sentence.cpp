/*
Approach->
here we use  a character array to take input from user,string vector is used to 
store individual words
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void  Reverse(char a[]){

    vector<string> tmp;
    string str="";

    for(int i=0;i<strlen(a);i++){

        if(a[i]==' '){
            tmp.push_back(str);
            str="";
        }

        else{
            str+=a[i];
        }

    }
    tmp.push_back(str);

    for(int i = tmp.size()-1;i>=0;i--){
        cout<<tmp[i]<<" ";
    }
    cout<<endl;

}

int main(){
    char a[1000];
    cin.getline(a,1000,'\n');
    Reverse(a);
}