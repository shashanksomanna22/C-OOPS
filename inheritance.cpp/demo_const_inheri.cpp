#include<iostream>
using namespace std;

class A{
    protected:
     A(){
        cout <<"A is initilized"<< endl;
     }
};

class B : protected A{
    protected:
};
class N{
    protected:
    N(){
        cout<<"N is initialized"<<endl;
    }
};
class D : A{
    public:
    D()
    {
        cout<<"D is initialized"<<endl;
    }
};
/*
class E: N,virtual protected B{
    protected:
    E(){
        cout<<"E is initialized"<<endl;
    }
};
class C: virtual protected B{
    protected:
    C(){
        cout<<"C is initialized"<<endl;
    }
};
class F: C,E{
    public:
    F(){
        cout<<"F is initialized"<<endl;
    }
};
*/
int main(){
    D ob;
    return 0;
}