//visibility mode : protected 
#include <iostream>
using namespace std;

class A
{
    int id;
    string name;
    protected : long int ph ;
    public:
    void  set_data()
    {
        cout <<"Enter Id =" ;
        cin >> id;
        cout << "Enter Ph =";
        cin >> ph;
        cout <<"Enter Name =";
        cin >> name;
    }
    void print_data()
    {
        cout <<name << " " << "Details are: " <<endl;
        cout <<"Id =" <<id <<endl;
        cout <<"Name = " <<name <<endl;
        cout <<"Phone no =" << ph <<endl;
    }
};

class B : protected A
{
   // int temp ;
    public :
    void set_data_temp()
    {
        set_data();
        //cin >> temp;
    }
    void print_data_temp()
    {
        print_data();
        //cout << temp;
    }
};

int main ()
{
   B obj1;

   /*this can be used 
   obj1.print_data();
   obj1.set_data();
   */
   obj1.set_data_temp();
   obj1.print_data_temp();
}
