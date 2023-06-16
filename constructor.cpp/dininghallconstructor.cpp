#include <iostream>
using namespace std;

class dininghall
{
  int seat ;
  char name[20];
  static int taken;

  public:
  void get_data()
  {
    taken ++;

    cout << "seat numebr =" <<taken <<endl;
    cout << "name = " << name <<endl;
    cin.getline(name,20);
    seat = taken;

  }
  static void status()
  {
    cout <<"total seat = 50" <<endl;
    cout << "seat taken = " << taken <<endl;
    cout << "availabel = " << 50 - taken <<endl;
  }

  void disp_data()
  {
    cout << "seat no =" <<seat <<endl;
    cout << "name = " <<name <<endl;
  }
};

int dininghall :: taken;

int main ()
{
    dininghall dh[50];

    int s;
    char more = 'y';

    for(int  i = 0; more == 'y' && i<50 ; i++)
    {
        dh[i].get_data();
        cout <<"more ?" <<endl;
        cin >>more;
       // more = toupper(no);
    }
    cout <<"enter seat number to display " <<endl;
    cin >> s;
    dh[s-1].disp_data();
}