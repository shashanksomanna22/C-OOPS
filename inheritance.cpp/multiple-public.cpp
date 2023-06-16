//visibility mode : public 
// multiple inheritance
#include <iostream>
using namespace std;

class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
   protected:
      int width;
      int height;
};

class Color {
   public:
      void setColor(string c) {
         color = c;
      }
   protected:
      string color;
};

class Rectangle: public Shape, public Color {
   public:
      int getArea() {
         return (width * height);
      }
      string getColor() {
         return color;
      }
};

int main() {
   Rectangle rect;

   rect.setWidth(5);
   rect.setHeight(7);
   rect.setColor("red");

   cout << "Area: " << rect.getArea() << endl;
   cout << "Color: " << rect.getColor() << endl;

   return 0;
}
