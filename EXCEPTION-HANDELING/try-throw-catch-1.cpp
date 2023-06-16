#include<iostream>
using namespace std;

int main(){

    int a , b , sub;
    cin >> a >> b;
    sub = a - b;
    try {
        if (sub!=0){
            cout <<"div = " << a / b << endl;
        }

        else {
            throw(sub);
        }
    }

    catch (int c){
        cout <<"sorry enter correct input " << endl;
    }

    return 0;
}