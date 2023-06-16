//pointer to object

#include<iostream>
using namespace std;

class item{
    int code;
    float price;
    public:
    void get_data(){
        cout <<"Enter code: ";
        cin >> code;
        cout <<"Enter price: ";
        cin >> price;
    }
    void put_data(){
        cout <<"Item details: \n";
        cout <<"Code: " << code << endl;
        cout <<"Price: " << price << endl;
    }
};

int main (){
    //creating object for class item
    item obj1;

    //creating a pointer variable 
    item *ptr;
    ptr = &obj1;

    //accessing the data members using pointer
    ptr->get_data();
    ptr->put_data();

    //another type of accessing data members
    (*ptr).get_data();
    (*ptr).put_data();

}