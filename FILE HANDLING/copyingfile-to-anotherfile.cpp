#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //reading the file 
    string filename;
    cout <<"Enter the file name: ";
    cin >> filename;

    ifstream in;
    in.open(filename,ios::in);
    if(!in){
        cout <<"File doesnt exist!" << endl;
    }
    else{
        cout <<"File succesfully opened!\n";
    }

    //creating or opening a file to copy 
    string file_copy;
    cout <<"Enter filename to copy: ";
    cin >> file_copy;
    ofstream out;
    out.open(file_copy,ios::out);

    while(!(in.eof())){

        char content;
        cout <<"\nContent of first file: \n" ;
        content = in.get();
        //copying 
        out.put(content);
    }
    
    cout <<"\nSuccesfully copied !" << endl;
    out.close();
    in.close();
}

