#include<iostream>
using namespace std;

class equilateraltriangle
{
    float num;
    float circumference ;
    float area;

    public :
    void set_data(float length)
    { 
       num = length;
       circumference = num + num + num;
       area = (1.73 *num *num)/4;
    }

    //declaring friends function to acces
    friend void disp_data(equilateraltriangle);
};

//defining freind function
void disp_data(equilateraltriangle et)
{
    cout << "circumference of the equilateral triangle is = " << et.circumference <<endl;
    cout << "area of the equilateral triangle is =" << et.area <<endl;

}

int main()
{
    equilateraltriangle et;
    //setting the value for the data
    et.set_data(3);
    //displaying the data
    disp_data(et);
}