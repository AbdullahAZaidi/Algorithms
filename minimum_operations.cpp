/******************************************************************************

You are given a number N. You have to find the number of operations required to reach N from 0. You have 2 operations available:

Double the number
Add one to the number

*******************************************************************************/
#include <iostream>
using namespace std;

int MinSteps (int a){
  int p = 1 ;
  int count = 0;
 
    while(p*2 <= a){
      p*=2;
      count+=1;
    }
    
    while(p!=a){
      p+=1;
      count+=1;
    }
    
    
  cout <<count+1<<endl;
  return 0;
}

int main() {
  int a;
  cout << "Enter Number:" << endl;
  cin >> a;
  MinSteps(a);
  return 0;
}
