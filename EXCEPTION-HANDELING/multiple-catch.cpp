#include<iostream>
using namespace std;

int main(){
    try{
        throw (5.2);
    }
    catch(int temp){
        cout <<"int type: " << temp << endl;
    }
    catch(double temp){
        cout <<"double type: " << temp << endl;
    }
    catch(char temp){
        cout <<"char type: " << temp << endl;
    }
}