/*visiblity mode -- public -------- multiple inheritance*/

#include<iostream>
using namespace std;

class shape
{
  public:
  void set_height(int h)
  {
    height = h;
  }
  void set_width(int w)
  {
    width = w;
  }

  protected: int height , width ;
};

class colour 
{
  public:
  void set_colour(string c)
  {
    colour = c;
  }
  protected: string colour;
};

class rectange : public shape , public colour 
{
  public:
  int get_area()
  {
    return (width*height);
  }
  string get_colour()
  {
    return colour;
  }
};

int main ()
{
  rectange r1;
  r1.set_height(5);
  r1.set_width(7);
  r1.set_colour("Red");

  cout <<"Area: " << r1.get_area() << endl;
  cout <<"Colour: " << r1.get_colour() << endl;

}