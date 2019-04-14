// pointers and arrays
#include <iostream>
using namespace std;

int main ()
{
    int arr[6];
    int * pt;
  
    pt = arr;     // no & operator, an array points to its first element 
    *pt = 1;
  
    pt++;          // pointer arithmetic
    *pt = 2;
  
    pt = arr + 2;  
    *pt = 3;
  
    pt = &arr[3];  // need to use the & operator here
    *pt = 4;
  
    pt = arr;     // pt again points to the first arr element 
    *(pt+4) = 5;
  
    pt = (arr+5);
    *pt = 6;

    cout << "The address of the first element of arr = "<< arr << "\n";
    cout << "The first element of arr = "<< *arr << "\n";

    cout << "The elements of array arr: ";
    for (int a : arr){                              // range-based for loop
        cout << a << ", ";
    }
    
    return 0;
}
