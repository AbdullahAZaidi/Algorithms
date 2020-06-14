//****
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].
*****//


#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> r;
int maxIndex(vector<int> a){
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < a.size(); j++){
            if (a[i]<=a[j])
            {
                int diff = j-i;
                r.push_back(diff);
            }
        }
    }
    return *max_element(r.begin(), r.end());

}



int main() {
	//code
	
	vector<int> r = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};

	cout << maxIndex(r) << endl;

	return 0;
}
