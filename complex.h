#include <iostream>
//#include "point.h"
using namespace std;

class complex
{
  public:
  complex(point& p)
  {
    this->real = p.getx();
    this->imaginary= p.gety();
  }
  complex()
  {
    this->real = 2;
    this->imaginary = 5;
  }
  complex(float rea,float img)
  {
    this->real = rea;
    this->imaginary = img;
  }
  void setreal()
  {
    this->real = 2;
  }
  void setimaginary()
  {
    this->imaginary =5;
  }
  float getreal()
  {
    return this->real;
  }
  float getimaginary()
  {
    return this->imaginary;
  }
  complex(complex& clonez1)
  {
    this->real = clonez1.real;
    this->imaginary = clonez1.imaginary;
  }
  complex add(complex z2)
  {
    complex result;
    result.real = this->real-z2.real;
    result.imaginary = this->imaginary-z2.imaginary;
    return result;

  }
  void show()
  {
    cout<<"Real Part:"<< this->real <<endl;
    cout<<"Imaginary Part:"<< this->imaginary <<endl;
  }
  
  private:
  float real;
  float imaginary;

};