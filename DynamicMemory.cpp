// Dynamic memory and arrays
#include <iostream>
#include <new>
using namespace std;

int main ()
{
  int i,j;
  int * pt;
  cout << "How many integers would you like to store? ";
  cin >> i;
  pt = new (nothrow) int[i];  // dynamic memory allocation, nothrow prevents the bad_alloc exception instead returning nullptr
  if (pt == nullptr)
    cout << "Error: memory could not be allocated";   // exception handling
  else
  {
    for (j=0; j<i; j++)
    {
      cout << "Enter integer: ";
      cin >> pt[j];
    }
    cout << "You have stored: ";
    for (j=0; j<i; j++)
      cout << pt[j] << ", ";
    delete[] pt;              // delete pt after usage 
  }
  return 0;
}
