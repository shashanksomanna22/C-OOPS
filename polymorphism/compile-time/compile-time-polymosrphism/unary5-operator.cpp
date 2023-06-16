#include<iostream>
using namespace std;

class unary{
    int a[3];
    public:
    unary(int i , int j , int k){
        a[0] = i;
        a[1] = j;
        a[2] = k;
    }

    int operator [](int i){
        return a[i];
    }
};

int main (){
    unary obj(5,4,2);
    cout <<"enter the index no: " ;
    int index;
    cin >> index;
    cout <<obj[index];
}