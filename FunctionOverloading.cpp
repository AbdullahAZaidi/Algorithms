/******************************************************************************
Function Overloading

*******************************************************************************/

#include <iostream>

using namespace std;

class Hello {
    public: 
    
    void tree(int a){
        cout  << a << endl;
    }
    
    void tree(double b){
        cout  << b << endl;
    }
    
    void tree(string c){
        cout  << c << endl;
    }
};


int main() { 
    Hello p;
    p.tree(1);
    p.tree(4.5);
    p.tree("here");
}
