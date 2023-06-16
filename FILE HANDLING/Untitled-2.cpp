#include<iostream>
#include<fstream>
int main()
{
    ofstream font;
    font.open("test.txt");
    font<<"hello";
    font.close();
}