/*wap to calculate the cube of an integer and float using the concept of function overloading*/

#include<iostream>
using namespace std;

int cube(int i){
    int cube1 = i * i * i;
    cout <<"cube 1 = " << cube1 << endl;
    //return cube1;
}

float cube(float j){
    float cube2 = j * j * j;
    cout <<"cube 2 = " << cube2 << endl;
    //return cube2;
}

int main (){
    int a = 2;
    float b = 3.2;
    cube(a);
    cube(b);
}