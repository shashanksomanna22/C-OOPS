//constructor : its a special method that is autoatically called when an object of a class is called 

#include<iostream>
using namespace std;

class student 
{
    public:
    student ()
    {
        cout << "constructor is called " << endl;
    }
};

int main ()
{
    // automaticaly student function is called if its dynamically or statically allocated

    //statically allocated
    student ramesh; 

    //dynamically allocated
    student *n = new student ;
    return 0;
}