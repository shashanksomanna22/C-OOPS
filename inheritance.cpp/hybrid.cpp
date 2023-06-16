//hybrid inheritance 

#include<iostream>
using namespace std;

class staff{
    protected : string name;
    int code;
    public:
    void set_data(){
        cout <<"Enter name: ";
        cin >> name;
        cout <<"Enter code: ";
        cin >> code;
    }

    void put_data(){
        cout <<"Name: " << name <<endl;
        cout <<"Code: " << code << endl;
    }
};

//derived class -1
class teacher : protected staff{
    protected : string subject;
    int publications;
    public: 
    void set_teacher_data(){
        set_data();
        cout <<"Enter subject: ";
        cin >> subject;
        cout <<"Enter publications: " ;
        cin >> publications;
    }
    void put_teacher_data(){
        cout <<endl;
        cout <<"Teacher data: \n";
        put_data();
        cout <<"Subject: " << subject << endl;
        cout <<"Publications: " << publications << endl;
    }
};

//derived class -2
class officer : protected staff{
    protected : string grade;
    public:
    void set_officer_data(){
        set_data();
        cout <<"Enter grade: ";
        cin >> grade;
    }
    void put_officer_data(){
        cout <<endl;
        cout <<"Officer data: \n";
        put_data();
        cout <<"Grade: " << grade << endl;
    }
};

//derived class -3
class typist : protected staff{
    protected : float speed ;
    float dailywages;
    public:
    void set_typist_data(){
        set_data();
        cout <<"Enter speed: ";
        cin >> speed;
        cout <<"Enter dailywages: ";
        cin >> dailywages;
    }
    void put_typist_data(){
        cout <<endl;
        cout <<"Typist data: \n";
        put_data();
        cout <<"Speed: " << speed <<endl;
        cout<<"Dailywages: " << dailywages << endl;
    }
};

int main()
{
    int menu ;
    cout <<"Enter\t1-Teachers\t2-Officer\t3-Typist" << endl;
    cin >> menu;

    switch(menu)
    {
        case 1:{
            teacher t;
            t.set_teacher_data();
            t.put_teacher_data();
            break;
        }

        case 2:{
            officer o;
            o.set_officer_data();
            o.put_officer_data();   
            break;
        }

        case 3:{
            typist ty;
            ty.set_typist_data();
            ty.put_typist_data();
            break;
        }

        default:{
            cout <<"WRONG INPUT " <<endl;
        }
    } 
}