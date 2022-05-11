#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int N,M;
	    
	    cin>>N>>M;
	    if(M>=N){
	        cout<< N <<endl;
	    }
	    
	    else{
	        cout<< 2*N - M;
	    }
	}
	return 0;
}
