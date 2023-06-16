#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void getdata(){
        cin>>x;
    }
    A operator++();

    void operator ++(int);
};
A A::operator++(){
    A obj;
    obj.x = ++obj.x;
  return obj;
}
