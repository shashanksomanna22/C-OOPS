#include <iostream>
using namespace std;

class student 
{
    int id;
    public:
    
   //default constructor
   student()
   {
    id =5;
    cout <<"id =" <<id <<endl;
   }
   //parameterized constructor
   student(int a)
   {
    id = a;
    cout <<"id =" <<id <<endl;
   }
   //copy constructor
   student (student &temp)
   {
    id = temp.id;
    cout <<"id =" <<id <<endl;
   }
   ~ student ()
   {
    id =5;
   }

};

int main ()
{
    student s1;
    student s2(10);
    student s3(s2);
    
}