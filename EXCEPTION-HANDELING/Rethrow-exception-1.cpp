#include<iostream>
using namespace std;

void division(int x , int y){
    try{
        if(y == 0){
            throw y;
        }
        else{
            cout <<"Div = " << x / y << endl;
        }
    }
    catch (int a){
        cout <<"Caught inside func " << endl;
        //rethrowing- no arguments
        throw;
    }
}

int main(){
    cout <<"Inside main func(): " << endl;
    try{
        cout <<"Example 1: " << endl;
        division(10,5);
        cout <<"Example 2: " << endl;
        division(5,0);
    }
    catch(int a){
        cout <<"Caught inside main()" << endl;
    }
}