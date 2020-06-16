/******************************************************************************

Exception handling

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
int p = -1; 
  try { 
    
      
      if (p < 0){ 
          throw 88;
      }
  }
      catch(int x){
          cout << "cannot be less than 0, ERROR : " << x << endl;
      }
  
}
