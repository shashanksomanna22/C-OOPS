//swapping the numebrs using friend function;
//call by value

#include <iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
    void getdata_a(int i)
    {
        a = i;
    } 
    void display_a()
    {
        cout << "a = " << a;
    }
    friend void swap (A , B);
} ;

class B
{
    int b;
    public:
    void getdat_b(int j)
    {
        b = j;
    }
    void display_b()
    {
        cout << "b =" << b;
    }

    friend void swap (A , B);
};

void swap (A ob1 , B ob2)
{
    int temp;

    temp = ob1.a;

    ob1.a = ob2.b;

    ob2.b = temp;

}

int main ()
{
    A ob1;

    B ob2;

    //getting the data
    cout << "before swapping : " << endl; 
    ob1.getdata_a(30);
    ob2.getdat_b(20);

    

    //displaying the data
    swap (ob1 , ob2);
    cout << endl <<  " after swapping :" << endl;
    ob1.display_a();
    ob2.display_b();
    
    return 0;
}