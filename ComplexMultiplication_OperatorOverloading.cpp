/******************************************************************************

Complex Multiplication using OperatorOverloading

*******************************************************************************/

#include <iostream>

using namespace std;

class Complex{
    private : 
    int imag; 
    int real; 
    
    public:
    Complex (int a= 0, int b = 0){real = a; imag = b;}
    
    Complex operator*(Complex &a){
        Complex c;
        c.real = real*a.real - imag*a.imag;
        c.imag = real*a.imag + imag*a.real;
        return c;
    }
    
    void print() {
        cout <<real << "+j" << imag << endl;
    }
};

int main() {
    
    Complex a(3,4), b(7,8);
    Complex c = a*b;
    c.print();
    
    return 0;
    
}
