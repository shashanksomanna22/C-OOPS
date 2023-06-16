#include<iostream>
using namespace std;

class student{
    protected: int uid;
    string name;
    public: void get_no(){
        cout <<"Enter uid: ";
        cin >> uid;
        cout <<"Enter name: ";
        cin >> name;
    }
    void put_no(){
        cout <<"Uid: " << uid << endl;
        cout <<"Name: " << name << endl;
    }
};

class test: virtual protected student {
    protected: int marks1, marks2;
    public: void get_marks(){
        cout <<"Enter marks1: ";
        cin >> marks1;
        cout <<"Enter marks2: ";
        cin >> marks2;
    }
    void put_marks(){
        cout <<"Marks1: " << marks1 << endl << "Makrs2: " << marks2 << endl;
    }
};

class sports : virtual protected student{
    protected: int sportscore;
    public : void get_sportscore(){
        cout <<"Enter sports score: " ;
        cin >> sportscore;
    }
    void put_sportscore(){
        cout <<"Sports score: " <<sportscore << endl;
    }
};

class result : protected test, protected sports{
    protected : int total;
    public: void display(){
        cout <<"\nEnter student data:\n";
         get_no();
         get_marks();
         get_sportscore();
        cout <<"\n\nStudent---" << name << "---data\n";
         put_no();
         put_marks();
         put_sportscore();
         total = marks1 + marks2;
         cout <<"Total marks: " << total << endl;
    }
};

int main(){
    result r;
    r.display(); 
}