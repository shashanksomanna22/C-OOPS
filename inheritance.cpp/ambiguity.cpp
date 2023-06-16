/* Ambiguity inheritance -In multiple inheritance when two base classes having same name for their functions and data,
 ambiguity arises when they are used in the derived class */

 #include<iostream>
 using namespace std;

 class A{

    protected: int num;
    public:
    void show_data(){
        cout << "Show of A" << endl;
        cout << "num of A= " << num << endl << endl;
    }
 };

 class B{

    protected: int num;  
    public:
    void show_data(){
        cout << "Show of B" << endl;
        cout << "num of B= " << num << endl <<endl;
    }
 };

 class C : public A , public B{

    int num;
    public:
    void c(){
    A :: num = 10;
    B :: num = 20;
    num = 30;
    }

    void show_data(){
    cout << "Show of C" << endl;
    cout <<"num of C= " << num << endl;
    }

 };

 int main ()
 {
    C obj;
    obj.A :: show_data();
    obj.B :: show_data();
    obj.show_data();
 }