#include<iostream>
using namespace std;

int main(){
    int size;
    cout <<"Enter the size: ";
    cin >> size;

    int *ptr = new int[size];
    //taking input from user
    cout <<"\nEnter the elements: \n";
    for(int i=0; i<size; i++){
        cin >> ptr[i];
    }

    //output 
    cout <<"\nEelemnts are: \n";
    for(int i=0; i<size; i++){
        cout << ptr[i] << " ";
    }

    delete [] ptr;

}