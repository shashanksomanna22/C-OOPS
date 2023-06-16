#include<iostream>
using namespace std;

int main(){
    try {
        try{
            throw 20;
        }
        catch(int a){
            cout <<"a = " << a << endl;
            cout <<"Exception caught partially\n";
            throw;
        }
    }
    catch(int a){
        cout <<"a = " << a << endl;
        cout <<"Exception caught remaning\n";
    }
}