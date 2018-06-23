#include <iostream>

#include "point.h"
#include "complex.h"
using namespace std;

int main()
{
  point d;
  point k;
  point p;
  complex f;
  point e;
  double c;
  point p1(3,5);
   cout << "P1: " <<endl;
  p1.show();
  point p2(10,13);
   cout << "P2: " <<endl;
   p2.show();
  
  point *g;
  g = new point (5.0,6.0);
  cout<<g<<endl<<endl;
  cout << "Type Casting: " <<endl<<endl;
  f = (complex) p ;
  f.show();
  e=p2;
  if (p1>p2)
   {
     cout << "Greater Operator: " <<endl;
     cout << "P1 is Greater Than P2" <<endl;
   }
   else
{ 
  cout <<endl << "Greater Operator: " <<endl <<endl;
  cout << "P2 is Greater Than P1" <<endl <<endl;
}
  cout << "Assignment Operator: " <<endl<<endl;
  e.show();
  cout << "Constructor overload: " <<endl<<endl;
   p1 = (point) 23;
  p1.show();
  cout << "Add Operator: " <<endl<<endl;
  d = p1+p2;
  //d=sum(p1,p2);

  c = p1*p2;

  d.show();
  cout << "Multiply Operator: " <<endl;
  cout<<c<<endl;
  //k=p1+10.4;
  //k.show();
  system ("pause");
}
