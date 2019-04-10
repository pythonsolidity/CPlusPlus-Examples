//Binomial coefficient by recursion 
#include <iostream>
using namespace std;

int binCoeff (int n, int k){
    if (k == 1) return n;
    else {
        return binCoeff(n, k-1)*(n-k+1)/k; 
    }
}


int main () {
    int n, k;
    cout << "Enter two positive integers k and n >= k"<<endl;
    cin>> k >> n;
    cout << "The binomial coefficient C(n, k) = " << binCoeff(n, k) << endl;    
}
