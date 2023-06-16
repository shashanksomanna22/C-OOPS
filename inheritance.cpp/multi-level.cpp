//multi-level inheritance
//adding data 

#include<iostream>
using namespace std;

//base class
class A{
    public:
    int a;
    void get_A_data(){
        cout <<"Enter value for a: ";
        cin >> a;
    }
};

//intermediate class
class B : public A{
    public:
    int b;
    void get_B_data(){
        cout <<"Enter value for b: ";
        cin >> b;
    }
};

//derived class or child class
class C : public B{
    private : int c;
    public:
    void get_C_data(){
        cout <<"Enter value for c: ";
        cin >> c;
    }

    void sum(){
        int ans = a + b + c;
        cout <<"Sum: " << ans << endl;
    }
};

int main (){
    C obj;
    obj.get_A_data();
    obj.get_B_data();
    obj.get_C_data();
    obj.sum();
}