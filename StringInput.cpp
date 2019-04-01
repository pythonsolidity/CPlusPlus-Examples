// string i/o example

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
  int i;
  string mystr;
  cout << "Please enter an integer: ";
  getline (cin , mystr);
  stringstream (mystr) >> i;
  cout << "The double is " << i*2 << ".\n";
  return 0;
}
