// enum and union
#include <iostream>
using namespace std;

int main ()
{
  enum math {calculus, algebra = 3, geometry} course;   
  
  course = math(4);                             /* calculus is implicitly converted to the integer 0, 
                                                algebra is explicitly converted to 3 and geometry to 4 */
  cout << (course == geometry) <<'\n' ;
  
  union Same {
    char ch[4] = {'B', 'a', 'y', '\0'};
    int n;
  } un;
  
  cout << un.ch[2] << ", " << un.n;      // Both un.ch and un.n refer to the same value
  
  return 0;
}
