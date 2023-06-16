//visibility mode : private 
// multiple inheritance
#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void get_a()
    {
        cout <<"Enter a: ";
        cin >> a;
    }

    void disp_a()
    {
        cout << "A: " << a << endl;
    } 
    
};

class B
{
    int b;
    public:
    void get_b()
    {
        cout <<"Enter b: ";
        cin >> b;
    }

    void disp_b()
    {
        cout <<"B: " << b << endl;
    }
};

class C : private A, private B
{
   int c ;
   public:
   void get_c()
   {
    cout << "Enter c: ";
    cin >> c;
   }
   void disp_c()
   {
    cout << "C: " << c <<endl;
   }

   void print_deatils()
   {
    get_a();
    get_b();
    get_c();

    disp_a();
    disp_b();
    disp_c();
   }
};

int main ()
{
    C obj;
    obj.print_deatils();
}
