#include<iostream>
#include<list>
using namespace std;

class youtube 
{ 

    string ytname;
    string ownername;
    int subscribers;
   

    public:
     list<string> publishedvideos;
    void  setdata(string ytname, string ownername,int subscribers)
    { 
       this -> ytname = ytname;
       this -> ownername = ownername;
       this -> subscribers = subscribers;
    }

    void getinfo()
    {
        cout << "name = " << ytname <<endl;
        cout << "ownwer name =" << ownername <<endl;
        cout << "subscribers =" << subscribers <<endl;
        cout << "published videos =" <<endl;
        for(string videotitle: publishedvideos)
        {
            cout << videotitle<<endl;

        }
    }
};

int main ()
{
    cout <<"enter the size of the object to be created :";
    int size;
    cin >> size;

    youtube Y[size];

    for(int i=0; i<size; i++)
    {
        int c;
        string a,b;
        list <string> d;
        cout <<"enter the name of the youtube channel:" ;
        cin>>a;
        cout <<endl <<"enter the ownername of the youtube channel:" ;
        cin>>b;
        cout <<endl<< "enter the subscribers of the youtube channel:" ;
        cin>>c;
       // Y[i].publishedvideos.push_back(d);
        Y[i].setdata(a,b,c);
        Y[i].getinfo();


    }
}
