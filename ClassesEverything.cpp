// class, constructor, dynamic memory, pointers 
#include <iostream>
using namespace std;

class Cube {                                                    // class contains data, functions and access specifiers 
  double length, width, height;
public:
  Cube (double x, double y, double z) : length(x), width(y), height(z) {}        // member initiatization through inline constructor 
  Cube () : length(2), width(3), height(4) {}                                   // inline default constructor
  double vol(void) { return length * width * height; }
};


class Hypercube {
    double tyme;
    Cube cube;
public:
    Hypercube ();                                                               // prototype for default constructor
    Hypercube (double, double, double, double);                                 // prototype for constructor 
    double hypVol(void) {return tyme * cube.vol(); }                            
};

Hypercube::Hypercube () : tyme(1), cube() {}                                                //default constructor
Hypercube::Hypercube (double t, double x, double y, double z) : tyme(t), cube(x, y, z) {}   //constructor defined out of scope



int main() {
  Cube cub {3, 4, 5}; 
  Cube * pt1, * pt2, * pt3;
  pt1 = &cub;
  pt2 = new Cube (5, 6, 7);                                 // dynamic memory allocation 
  pt3= new Cube [3] { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };    // dynamic memory allocation 
  cout << "volume of cub: " << cub.vol() << '\n';
  cout << "volume of *pt1: " << pt1->vol() << '\n';
  cout << "volume of *pt2: " << pt2->vol() << '\n';
  cout << "volume of *pt3[0]: " << pt3[0].vol() << '\n';
  delete pt2;                                               // delete dynamic memory object
  delete[] pt3;                                             // delete dynamic memory object
  
  Hypercube * pt4, * pt5;
  pt4 = new Hypercube (2, 3, 4, 5);
  pt5 = new Hypercube ();
  
  cout << "hypervolume of *pt4: " << pt4->hypVol() << '\n';
  cout << "hypervolume of *pt5: " << pt5->hypVol() << '\n';

  return 0;
}	
