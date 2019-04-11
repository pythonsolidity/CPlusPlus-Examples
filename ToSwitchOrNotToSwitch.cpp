// switch control flow

#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string mystr;
  cout << "Please enter a string: ";
  getline (cin , mystr);
  
  char c = mystr[0];
  switch (c) 
  {
      case 'a':
      cout << "The first letter is the vowel: "<< 'a';
      break;
      case 'e':
      cout << "The first letter is the vowel: "<< 'e';
      break;
      case 'i':
      cout << "The first letter is the vowel: "<< 'i';
      break;
      case 'o':
      cout << "The first letter is the vowel: "<< 'o';
      break;
      case 'u':
      cout << "The first letter is the vowel: "<< 'u';
      break;
      default: 
      cout << "The first letter is not a consonant";
  }
  return 0;
}
