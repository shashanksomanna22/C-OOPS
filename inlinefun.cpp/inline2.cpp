#include <iostream>
using namespace std;

//defining
inline int swap(int a , int b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
   cout << "\nafter swapping : "<<endl;
cout <<"a= " << a <<endl << "b= " << b;
}

int main ()
{
  int a=3 , b=2;
  cout <<"before swapping  :" << endl;
  cout <<"a= " << a <<endl << "b= " << b;+
  swap(a,b);
}