#include<iostream>
using namespace std;

int main(){
    int a = 20;
    try{
        throw a;
    }
    catch(char c){
        cout <<"Value caught: " << c << endl;
    }

    //generalised catch block
    catch(...){
        cout <<"Default exception:\n";
        cout <<"Value caught: " << a << endl;
    }
}