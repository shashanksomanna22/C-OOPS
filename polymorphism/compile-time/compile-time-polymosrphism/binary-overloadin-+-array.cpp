#include<iostream>
using namespace std;

//addition of two matrix using + operator overloading
class binary{
    int a[3][3];
public:
        void set_data(){
            for(int i=0; i<3; i++){
                for(int j = 0; j < 3; j++){
                    cin >> a[i][j];
                }
            }
        }
        void display(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << a[i][j] << "\t";
                }
            cout <<"\n";
            }
        }

        // '+' operator overloading
        binary operator +(binary &ob2){
            binary ob3;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    ob3.a[i][j] = a[i][j] + ob2.a[i][j];
                }
            }
            return ob3;
        }
};

int main (){
    binary ob1 , ob2 , ob3;
    cout <<"Enter values for Matrix -- 1" << endl;
    ob1.set_data();
    cout <<"Matrix -- 1" << endl;
    ob1.display();
    cout <<endl;

    cout <<"Enter values for Matrix -- 2" << endl;
    ob2.set_data();
    cout <<"Matrix -- 2" << endl;
    ob2.display();
    cout <<endl;

    cout <<"Addition of two matrix is :" << endl;
    ob3 = ob1 + ob2;
    ob3.display();

}