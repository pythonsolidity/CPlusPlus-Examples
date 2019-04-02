// string i/o example

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
  int i;
  unsigned j = 0;
  string mystr;
  cout << "Please enter an integer: ";
  getline (cin , mystr);
  
  cout << "The digits of your integer are: ";
  for (char c : mystr)
  {
      j++;
      cout << c;
      j < mystr.length() ? cout << ", " : cout << ". ";
  }
  
  stringstream (mystr) >> i;
  cout << "The double is " << i*2 << ".\n";
  return 0;
}
