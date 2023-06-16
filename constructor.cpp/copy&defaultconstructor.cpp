#include<iostream>
using namespace std;

class student 
{
    int roll_no;
    string name;
    
    public:
    student ()
    {
        cout <<"enter roll no :";
        cin >>roll_no;
        cout <<"enter the name:";
        cin>>name;
    }

    //copy constructor
    student (student &temp)
    {
        roll_no= temp.roll_no;
        name=temp.name;
    }

    void disp_data()
    {
        cout <<"name =" <<name<<endl;
        cout <<"roll no=" <<roll_no<<endl;
    }
};

int main ()
{
    cout <<"default constructor :"<<endl;
    student s1;
    s1.disp_data();
    cout <<"copy constructor :"<<endl;
    student s2(s1);
    s2.disp_data();
}