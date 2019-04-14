// pointers as arguments, and const pointers 
#include <iostream>
using namespace std;

void increment (int* start, int* stop)
{
  int * current = start;
  while (current != stop+1) {
    (*current)++;  // increment value 
    current++;     // increment pointer
  }
}

void print (const int* start, const int* stop)
{
  const int * current = start;
  while (current <= stop) {
    cout << *current << '\n';
    current++;     // increment pointer without incrementing the arr pointer
  }
}

int main ()
{
  int arr[] = {11, 22, 33, 44, 55};
  increment (arr, arr+4);
  print (arr, arr+4);
  return 0;
}
