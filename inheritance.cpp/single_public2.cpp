//single inheritance : wheren there is single base and single derived class
//visibility mode : public 

#include <iostream>
using namespace std;

class A 
{
    int id;
    protected: string name;
    public:
    void set_data()
    {
        cout <<"enter id :" ;
        cin >> id;
        cout <<"enter name :";
        cin >> name;
    }

    void print_data()
    {
        cout <<"id =" <<id <<endl <<"name =" <<name <<endl;
    }
};

class B : public A
{
   int temp;
   public:
   void set_data_temp()
   {
    cin >> temp;
   }

   void print_data_temp()
   {
    cout << temp;
   }

};

int main ()
{
    B obj1;
    obj1.set_data();
    obj1.print_data();

    obj1.set_data_temp();
    obj1.print_data_temp();
}