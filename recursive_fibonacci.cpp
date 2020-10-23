#include <iostream>
using namespace std;

int fibonacci (int a){
    
    if (a == 0 || a == 1){
        return a;
    }  
    
    return fibonacci(a-1) + fibonacci(a-2);
    
}

int main (){
    for (int i = 0; i < 10; i++){
        cout << fibonacci(i) << endl;
    }
    
}
