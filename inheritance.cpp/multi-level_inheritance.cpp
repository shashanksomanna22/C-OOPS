// -- visibility mode -- public

#include<iostream>
using namespace std;

class student {
    protected : int roll_no;
    public:

   void get_roll_no(){
       cout <<"Enter roll no:";
       cin >> roll_no;
    }
      void disp_roll_no()
    {
        cout <<"Roll no: " << roll_no << endl;
    }
};

class test : protected student{

    protected : int sub1, sub2;

    public:
    void get_marks(){
        cout <<"Enter the marks: ";
        cin >> sub1 >> sub2;
    }
    void disp_marks()
    {
        cout << "sub1: " << sub1 << " "<< "sub2: " << sub2 << endl;
    }
  
};

class result : protected test{
    
    protected: int total;
    public:
    void display_total(){
        get_roll_no();
        get_marks();
        disp_roll_no();
        disp_marks();
        total = sub1 + sub2;
        cout <<"Total marks: " << total <<endl;
    }
};

int main()
{
    result r1;
    r1.display_total();
}