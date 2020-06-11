#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int Palindrome (vector<string> v){
    
    int flag = 0;
    int n = v.size();
    
    for (int i =0 ; i < v.size(); i++){
        if(v[i]!=v[n-i-1]){
            flag = 1;
        }
     }
    
    if (flag){cout<<"not a palindrome"<<endl;}
    else {cout<<"yes,a palindrome"<<endl;}
    
    return 0;
    }
        
        
    int main() {
    vector<string> a = {"a","d","b","b","d","a"};
    
    Palindrome(a);
    
	return 0;
}
