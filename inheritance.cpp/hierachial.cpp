/*wap using hierachial inheritance concept
--->take a base class staff 
--->take a derived class teacher , officer , typist
*/

#include<iostream>
using namespace std;

class staff {
   protected: string name;
   int code;

    public:
    void get_data(){
        cout <<"Enter name: ";
        cin >> name ;
        cout <<"Enter code: ";
        cin >> code;
    }
    void put_data(){
        cout <<"Name: " << name << endl;
        cout <<"Code: " << code << endl;
    }
};

class teacher : protected staff {
    protected : string subject;
    int publications;

    public:
    void get_teacher_data(){
        get_data();
        cout <<"Enter subject: ";
        cin >> subject;
        cout <<"Enter publications: ";
        cin >> publications;
    }
    void put_teachers_data(){
        put_data();
        cout <<"Subject: " << subject << endl;
        cout <<"Publications: " << publications << endl;
    }

};

class officer : protected staff{
    protected : char grade[10];
    public:
    void get_officer_data(){
        get_data();
        cout <<"Enter grade: ";
        cin >> grade;
    }
    void put_officer_data(){
        put_data();
        cout <<"Grade: " << grade << endl;
    }
};

class typist : protected staff{
    protected: float speed;
    int dailywages;
    public:
    void get_typist_data(){
        get_data();
        cout <<"Enter speed: ";
        cin >> speed;
        cout <<"Enter dailywages: ";
        cin >> dailywages;
    }
    void put_typist_data(){
        put_data();
        cout <<"Speed: " << speed << endl;
        cout <<"Dailywages: " << dailywages << endl;
    }
};

int main (){
    int choice;
    cout <<"Enter\n1--TEACHER\t2--OFFICER\t3--TYPIST" << endl;
    cin >> choice;

    switch(choice){
        case 1:
        {
            cout <<"Enter teacher data:\n";
            teacher t;
            t.get_teacher_data();
            cout <<"\nteacher data:\n";
            t.put_teachers_data();
            break;
        }
        case 2:
        {
            cout <<"Enter officer data:\n";
            officer o;
            o.get_officer_data();
            cout <<"\nOFFICER DATA:\n";
            o.put_officer_data();
            break;
        }
        case 3:
        {
            cout <<"Enter typist data:\n";
            typist ty;
            ty.get_typist_data();
            cout <<"\nTYPIST DATA:\n";
            ty.put_typist_data();
            break;
        }
        default:
        {
            cout <<"WRONG INPUT!!";
            break;
        }
    }
}