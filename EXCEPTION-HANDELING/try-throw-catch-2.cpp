#include<iostream>
using namespace std;

int main(){
    int numerator , denominator , result;
    cout <<"Enter numerator:";
    cin >> numerator;
    cout<<"Enter denominator:";
    cin >> denominator;

    //exception
    try{
        if(denominator==0){
            throw denominator;
        }
        else{
            result = numerator / denominator;
        }
    }
    catch(int ex){
        cout <<"Exception: you cannot divide by zero - " << ex << endl;
    }

    cout <<"Result: " << result ;
}