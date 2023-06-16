//friend function: the protected and private data can be accesed using function called friend function

#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;
    int ph;
    static int count;

    public:
    void set_data()
    {
        cout<<"enter id =" ;
        cin >>id;
        cout <<"enter namea =";
        cin>>name;
        cout <<"ph =";
        cin>>ph;
        count ++;
    }
    void count_data()
    {
        cout <<"count =" << count <<endl <<endl;
    }

    //declaration of friend function
    friend void disp_data(employee);
};
//defining static data member 
int employee ::count;

//defining friend function
void disp_data(employee e)
{
    cout <<endl <<"deatils of emploee --" <<e.name <<endl;
    cout << "id =" <<e.id <<endl;
    //cout << "name =" <<e.name <<endl;
    cout << "ph =" <<e.ph <<endl ;
}

int main()
{
    cout <<"enter the size of object:";
    int size ;
    cin>>size;
    
    //creating objects
    employee e[size];

    for(int i=0;i<size;i++)
    {
        e[i].set_data();
    }

    for (int i=0;i<size;i++){
        disp_data(e[i]);
        e[i].count_data();
    }
}
