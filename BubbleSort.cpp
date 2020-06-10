#include <iostream>
#include <vector>

using namespace std;



vector<int> bubbleSort (vector<int> r){
    int count = 0;
    vector <int> w;
    for (int i= 0; i < r.size(); i++){
        for (int j= 0; j < r.size()-1; j++){
            if (r[j]>r[j+1]){
                int temp = r[j+1];
                r[j+1] = r[j];
                r[j] = temp;
            }
        }         
    }
    return r;
}


int main()
{
    vector<int> v = {1,2,5,5,6,7,3,4,4,3,343,565,77};
    vector<int> p = bubbleSort(v);
    for (int i= 0; i < p.size(); i++){
         cout << p[i] <<endl;
    }
    return 0;
}
