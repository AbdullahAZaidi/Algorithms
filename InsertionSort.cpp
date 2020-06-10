#include <iostream>
#include <vector>

using namespace std;



vector<int> InsertionSort (vector<int> r){
    int count = 0;
    vector <int> w;
    for (int i= 0; i < r.size(); i++){
        for (int j= 0; j < r.size(); j++){
            if (r[i]<r[j]){
                int temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }
        }
                
    }
    return r;
}


int main()
{
    vector<int> v = {1,2,5,5,6,7,3,4,4,3,343,565,77};
    vector<int> p = InsertionSort(v);
    for (int i= 0; i < p.size(); i++){
         cout << p[i] <<endl;
    }
   
    return 0;
}
