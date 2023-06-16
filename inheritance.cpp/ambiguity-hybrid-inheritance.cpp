#include <iostream>
using namespace std;

//virtual base class
class student {
    protected : int uid ;
    string name;

    public:
    void set_student_Data(){
        cout <<"Enter uid: ";
        cin >> uid;
        cout <<"Enter name: ";
        cin >> name;
    }

    void print_student_Data(){
        cout <<"UID: " << uid << endl;
        cout <<"NAME: " << name << endl;
    }
};

class test : virtual public student {
    protected : int marks1 , marks2;
    public:
    void set_test_Data(){
        cout <<"Entert marks1: ";
        cin >> marks1;
        cout <<"Enter marks2: ";
        cin >> marks2;
    }

    void print_test_Data(){
        cout <<"Marks 1: ";
        cin >> marks1;
        cout <<"Marks 2: ";
        cin >> marks2;
    }
};

class sports : virtual public student{
    protected : int sports_score;
    public:
    void set_sports_score(){
        cout <<"Enter sports score: ";
        cin >> sports_score;
    }

    void print_sports_Score(){
        cout <<"Sports score: " << sports_score << endl;
    }
};

class result : public test , public sports{
    protected : int total;
    public:
    void display(){
        set_student_Data();
        set_test_Data();
        set_sports_score();

        print_student_Data();
        print_test_Data();
        print_sports_Score();
        total = marks1 + marks2;
        cout <<"Marks: " << total << endl;
    } 
};

int main (){
    result r;
    r.display();

}