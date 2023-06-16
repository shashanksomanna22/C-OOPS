#include<iostream>
using namespace std;

class binary{
    int real , img;
    public:
    //initialising defualt constructor and initialising the members with zero
    binary(): real(0) , img (0){}  // one tyrpe of initialisation
    void get_data(){
        cout <<"Input real and img no's: ";
        cin >> real >> img;
    }

    //definiton
    binary operator - (binary obj2){
        binary obj3;

        obj3.real = real - obj2.real;
        obj3.img = img - obj2.img;
        return obj3;
    }

    void show(){
        if (img < 0){
            cout <<"Complex no is: " << real << img << "i";
        }
        else{
            cout <<"Complex no is: " << real << "+" << img << "i" << endl;
        }
        }
};

int main (){
    binary obj1, obj2, obj3;
    obj1.get_data();
    obj2.get_data();
    obj3 = obj1 - obj2;
    obj3.show();
    
}