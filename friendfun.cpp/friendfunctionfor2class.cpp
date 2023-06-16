// using  same friend function for two class

#include <iostream>
using namespace std;

class B ;//forward declaration of class

class A
{
    int a;

    public:
    void getdata_a(int i)
    {
        a = i;
    }

    //using frienf function for two classes
    friend void large (A , B);
};

class B
{
    int b;

    public:
    void getdata_b(int j)
    {
        b = j;
    }

    friend void large (A , B);
};

void large (A obj1 , B obj2)
{
    if (obj1.a > obj2.b)
    {
        cout << "largers is obj1 ->" << obj1.a << endl; 
    }
    else
    {
        cout << "larger is obj2 ->" <<obj2.b <<endl;
    }
}

int main ()
{
    A obj1 ;

    B obj2 ;

    //getting the data 
    obj1.getdata_a(60);
    obj2.getdata_b(70);
    
    //displaying the data
    large(obj1 , obj2);

    return 0;

}

