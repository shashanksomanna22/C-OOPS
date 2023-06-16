#include<iostream>
#include<fstream>
using namespace std;

//objective : to check the no.of character and line in the file
int main(){

    //reading the file 
    ifstream in;
    string filename;
    cout <<"Enter file name: ";
    cin >> filename;
    in.open(filename, ios:: in);
    if(!in){
        cout <<"File doesnt exist!" << endl;
        exit(1);
    }
    else{
        cout <<"\nSuccessfully file opened! " << endl;
    }

    int count_char = 0 , count_line = 0;
    while(!(in.eof())){
        char content_in_file;
        content_in_file = in.get();
        cout << content_in_file ;

        if(content_in_file == '\n'){
            count_line ++;
        }
        else{
            count_char++;
        }
    }
    cout <<"\nNo.of lines in File: " << count_line << endl;
    cout <<"\nNo.of characters in File: " << count_char << endl;
    in.close();

}