/******************************************************************************

Template and Comparison Operator

*******************************************************************************/

#include <iostream>

using namespace std;

template  <typename Type>
Type Compare (Type a, Type b){
    return a>b ? a:b;
}

int main () {
    cout << Compare (34.3,6.5) << endl;
    return 0;
}
