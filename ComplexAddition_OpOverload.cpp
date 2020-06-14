/******************************************************************************
Complex Addition using operator overloading

*******************************************************************************/

#include <iostream>

using namespace std;

class Complex{
    int real;
    int imag; 
    
    public: 
    Complex (int r = 0, int i = 0){ real = r; imag = i;}
    
    Complex operator+ (Complex &a){
        Complex c;
        c.real = real + a.real;
        c.imag = imag + a.imag;
        return c;
    }
    void print() { cout << real << " + i" << imag << endl; } 
};

int main(){
    Complex p(3,5), r(2,7);
    Complex e = p+r;
    e.print();
    
}
