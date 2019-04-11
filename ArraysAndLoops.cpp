// arrays using while and do while loops
#include <iostream>
using namespace std;

int n;
    
int main (){

    cout << "Enter array length" << '\n';
    cin >> n;
    int foo [n]; 
    
    cout << "Enter array elements\n";
    
    int i=0;
    while(i < n){
        cin >> foo[i];
        i++;
    }
    
    int j=0;
    do{
        cout << "The " << j << "th element of the array =" << foo[j] << '\n';
        j++;
    } while(j < n);
    
    return 0;
}
