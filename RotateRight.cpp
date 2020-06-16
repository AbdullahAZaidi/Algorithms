/******************************************************************************
Rotating the vector to the right

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> RotateLeft (vector<int> vec, int d){
    vector<int> r;
    int n = vec.size();
    
     for (int i = 0; i < d; i++) { 
        vec.insert(vec.begin(),vec[n-1]); 
        vec.pop_back(); 
    } 
    return vec;
}

int main()
{
    vector<int> r;
    vector<int> p = {1,2,3,4,5,6,7,8,2,5,7,8};
    
    r = RotateLeft (p,5);
    
    for (int i =0; i < r.size(); i++)
    {
        cout << r[i] << endl;
    }

    return 0;
}
