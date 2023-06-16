/*constructor inheritance*/

#include<iostream>
using namespace std;

class alpha{
    int a;
    public:
    alpha(int i){
        a = i;
        cout <<"Alpha initilized" << endl;
    }
    void show_alpha(){
        cout <<"a = " << a << endl;
    }
};

class beta {
    float b;
    public:
    beta(float j){
        b = j;
        cout <<"Beta initilized" << endl;
    }
    void show_beta(){
        cout <<"b = " << b << endl;
    }
};

class gamma : public alpha , public beta{
    int m , n;
    public:
    gamma(int p, float q, int s , int r ): alpha(p), beta(q){
    m = s;
    n = r;
    cout <<"Gamma initilized" << endl;
    }
    void show_gamma(){
        cout <<"m = " << m << endl ;
        cout <<"n = "<< n << endl;
    }
};

int main ()
{
    gamma g1(8,5,3,2);
    g1.show_alpha();
    g1.show_beta();
    g1.show_gamma();
}