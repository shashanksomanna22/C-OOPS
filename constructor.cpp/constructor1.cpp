/*wap to create a constructor,default ,parameterized and copy constructor of data items 
1.name of the student (string)
2.roll no (int)
3.height (int) in cm
4.weight (int) in kg/g
*/

#include<iostream>
using namespace std;

class student 
{
    string name;
    int roll_no;
    float height;
    int weight;

    public:

    //defualt constructor
     student ()
    {
       name = "shashank";
       roll_no = 2270604;
       height = 5.12;
       weight = 65;
    }

    //parameterized constructor
    student (string name, int roll_no, float height, int weight)
   {
    this -> name = name;
    this -> roll_no = roll_no;
    this -> height = height;
    this -> weight = weight;
   }

   //copy constructor 
     student (student &temp)
   {
    name = temp.name;
    roll_no = temp.roll_no;
    height = temp.height;
    weight = temp.weight;
   } 

   //displaying data
   void disp()
   {
     cout << "name =" << name <<endl;
     cout << "roll_no =" << roll_no <<endl;
     cout << "height = " <<height << "cm" <<endl;
     cout <<"weight = " <<weight <<"kg" <<endl;
     cout <<endl<<endl;
    }
};

int main ()
{
    //creating objects 
    student s1;
    student s2("shashank",2270604,5.12,65);
    student s3;
    s3 = s2;

    //displaying data
    cout << "defualt constructor :" << endl;
    s1.disp();
    cout << "parameterized constructor :" << endl;
    s2.disp();
    cout << "copy constructor :" << endl;
    s3.disp();
}
