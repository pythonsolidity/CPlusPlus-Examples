//Pascal's triangle 
#include <iostream>
#include <string>
using namespace std;

int binCoeff (int n, int k){
    if (k == 0) return 1;
    else if (k == 1) return n;
    else {
        return binCoeff(n, k-1)*(n-k+1)/k; 
    }
}


int main () {
    int r;
    const char c = ' ';
    cout << "Enter number of rows"<< endl;
    cin >> r;
    cout << "The Pascal's triangle with " << r << " rows is:" << endl; 
    for (int i = 0; i <= r ; i++){
        cout << string(r-i,c);
        for (int j = 0; j <= i; j++){
            cout << binCoeff(i, j) << " ";
        }
        cout<< endl;
    }
    return 0;
}
