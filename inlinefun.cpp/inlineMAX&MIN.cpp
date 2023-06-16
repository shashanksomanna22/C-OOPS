//wap to check min and max in inputed three numbers using inline function

#include<iostream>
using namespace std;

inline int MAX (int a, int b,int c)
{
    int x = (a>b)?(a>c?a:c) :(b>c?b:c);
    return x;
}
inline int MIN(int a, int b, int c)
{
    int x = (a<b)?(a<c?a:c):(b<c?b:c);
    return x;
}

int main ()
{
    int num1, num2, num3;
    cout <<"enter three number:" ;
    cin >>num1 >>num2>>num3;

    cout <<"maximum number is :" << MAX(num1,num2,num3)<<endl;
    cout <<"minimun number is :" <<MIN(num1,num2,num3)<<endl;
    return 0;
}
