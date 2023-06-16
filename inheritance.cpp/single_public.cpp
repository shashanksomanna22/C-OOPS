
#include<iostream>
using namespace std;

class student 
{
    int roll_no;
    protected: string course;
    public:
    void set_roll_no()
    {
        cout <<"enter roll no =";
        cin >> roll_no;
        cout <<"enter course opted =";
        cin >> course;
    }

    void show_roll_no()
    {
        cout <<"roll no =" <<roll_no <<endl;
        cout <<"course =" <<course <<endl;
    }
};

class result : public student
{
    int marks[3];
    static int count ;
    int sum=0;
    public:

    void set_data()
    {
       set_roll_no();
       for (int i=0;i<3;i++)
       {
        count ++;
        cout << "sub-" <<count <<endl;
        cin >> marks[i];
        sum = sum + marks[i];
       }
    }

    void disp_data()
    {
        show_roll_no();
        cout <<"total marks is :" <<sum <<endl;
    }

};

int result :: count;

int main ()
{
    result obj1;
    obj1.set_data();
    obj1.disp_data();
}