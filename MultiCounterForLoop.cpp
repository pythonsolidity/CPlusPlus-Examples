// multiple comma-separated counters in a for loop 

#include <iostream>
using namespace std;

int main ()
{
    unsigned n, k;
    cout << "Enter non-negative integers n and k<n: ";
    cin >> n >> k;
    
    for ( ; n != k ; k++, n--)
    {
        cout << n - k << ", ";
    }
    
    cout << 0;
}
