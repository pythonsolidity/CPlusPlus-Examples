// pointers, passing by reference and default parameter values

#include <iostream>
using namespace std;


bool pt (int& a, int b=2) {     // first argument is passed by reference, second argument has a defaul value 
    return (a++ == b);
}

int main ()
{
  int x = 1; 
  int * y;
  
  y = &x;
  *y = 2;                      // the values of both x and y are changed to 2

  cout<< pt(x, *y) << " " << x << endl;  
  
  return 0;
}
