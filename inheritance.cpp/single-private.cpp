//visibility mode : private

#include<iostream>
using namespace std;

class A
{
    int id;
    protected: string name;
    public:
    void set_data()
    {
        cout <<"id =" ;
        cin>> id;
        cout <<"name =";
        cin >> name;
    }
    void print_data()
    {
        cout << name << " "<< "details are :" <<endl;
        cout <<"id =" <<id << endl << "name =" << name;
    }
};

class B : private A
{


  public:
  void set_data_temp()
  {
    set_data();
  }

  void print_data_temp()
  {
    print_data();
  }

};

int main ()
{
    B obj1;
    obj1.set_data_temp();
    obj1.print_data_temp();
}