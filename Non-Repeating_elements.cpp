#include <iostream>
#include <vector>

using namespace std;

vector<int> nonRepeat (vector<int> r){
    int count = 0;
    vector <int> w;
    for (int i= 0; i < r.size(); i++){
        for (int j= 0; j < r.size(); j++){
            if (r[i]==r[j]){
                count +=1;}
        }
        if (count < 2){
            w.push_back(r[i]);
                }        
       count = 0; 
    }
    return w;
}


int main()
{
    vector<int> v = {1,2,5,5,6,7,3,4,4,3};
    vector<int> p = nonRepeat(v);
    for (int i= 0; i < p.size(); i++){
         cout << p[i] <<endl;
    }
    return 0;
}
