// enum, enum class and union
#include <iostream>
using namespace std;

int main ()
{
  enum math {calculus, algebra = 3, geometry} course;   
  course = math(4);                             /* calculus is implicitly converted to the integer 0, 
                                                algebra is explicitly converted to 3 and geometry to 4 */
  cout << (course == geometry) <<'\n';
  course = calculus; 
  cout << course << '\n';
  
  enum class Math {calculus, algebra, geometry} subject;
  subject = Math::calculus;                     // subject = calculus; throws an error
  subject = Math(1);
  cout << (subject == Math::algebra) <<'\n';   /* no implicit conversion to integers, 
                                                    so cout << subject; throws an error */
  
  union Same {
    char ch[4] = {'B', 'a', 'y', '\0'};
    int n;
  } un;
  
  cout << un.ch[2] << ", " << un.n;      // Both un.ch and un.n refer to the same value
  
  return 0;
}
