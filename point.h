#include <iostream>
using namespace std;

class point
{
  public:
  point()
  {
    this->x = 0;
    this->y = 0; 
  }
  point(double x1, double y1)
  {
    this->x = x1;
    this->y = y1;
  }
  void setx(double x)
  {
    this->x = x;
  }
  void sety(double y)
  {
    this->y = y;
  }
  double  getx()
  {
    return this->x;
  }
   double gety()
  {
    return this->y;
  }
  point(point& clonep1)
  {
    this->x = clonep1.x;
    this->y = clonep1.y;
  }
  point operator + (point& p2)
  {
    point result;
    result.x = this->x+p2.x;
    result.y = this->y+p2.y;
    return result;

  }
  double operator * (point& p2)
  {
    double z;
    z=(this->x*p2.x) + (this->y*p2.y);
    return z;

  }
   
  friend point sum(point&p1, point&p2);
 void show()
 {
   
   cout<<"x Coordinate:"<< this->x <<endl;
   cout<<"y Coordinate:"<< this->y <<endl<<endl;
 }
 void operator =(const point& p2)
 {
   this->x = p2.x;
   this->y = p2.y;
 }
bool operator >(point& p2)
 {
   if(this-> x > p2.x  && this-> y > p2.y )
   {
     return true;
   }
   else 
   {
     return false;
   }
   }
   bool operator <(point& p2)
 {
   if(this-> x < p2.x  && this-> y < p2.y )
   {
     return true;
   }
   else 
   {
     return false;
   }
   }
   point (float p1)
   {
     this->x = p1;
     this->y = 0;
   }
private:
double x;
double y;


};
 
 point sum(point&p1 , point&p2)
 {
   point s;
   s.x = p1.x+p2.x;
   s.y = p1.y+p2.y;
   return s;
 }