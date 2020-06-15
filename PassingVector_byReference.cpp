/******************************************************************************
Passing vector by reference

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> AddOne(vector<int> &j)
{
    // Dereference the pointer and increment the int being pointed to.
    for (int i =0; i < j.size(); i++){
        j[i]+=1;
    }
    return j;
}

int main() 
{
    vector<int> v = {1,2,3,4,5};
    
    // Declare a pointer to i:
    //int* pi = &i;
    v = AddOne(v);
    for (int i =0; i < v.size(); i++)
    {
    cout << v[i]<< "\n";
    }
}
