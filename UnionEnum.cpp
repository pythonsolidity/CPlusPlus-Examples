// unions and enums
#include <iostream>
using namespace std;

int main ()
{
  union Same {
    char ch[4] = {'B', 'a', 'y', '\0'};
    int n;
  } un;
  
  cout << un.ch[2] << ", " << un.n <<'\n';      // Both un.ch and un.n refer to the same value
    
  enum math {calculus, algebra = 3, geometry} course;   
  
  course = math(4);                             /* calculus is implicitly converted to the integer 0, 
                                                algebra is explicitly converted to 3 and geometry to 4 */
  
  cout << (course == geometry) ;
  
  return 0;
}
