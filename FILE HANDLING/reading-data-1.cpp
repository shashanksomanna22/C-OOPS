#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //reading the file which is aldready exist
    ifstream in("thirdfile.txt");
    if(!in){
        cout <<"Error in opening a file" << endl;
        exit(1);
    }

    string present_content_in_file;
    while(!(in.eof())){
        //it reads without spaces 
    in >> present_content_in_file;
    cout << present_content_in_file;
    }
    in.close();

}