//Modifying the data to a file using fstream class and modes ios::
 
#include<iostream>
#include<fstream>

using namespace std;

int main()
{

//Creating an input stream to read the content of a file
ifstream ifstream_ob;
ifstream_ob.open("First_file.txt", ios::in);

cout<<"The first location in the file : " <<ifstream_ob.tellg() << "\n";

char ch;


cout<<"\nReading the content of file : \n";

//Read the file until EOF is reached
while(ifstream_ob)
{
ch = ifstream_ob.get(); 
cout<<ch;	
}

//Setting the EOF flag off, to allow the access of file again for reading
ifstream_ob.clear();

cout<<"\n\nReading the content of file once again :" <<ifstream_ob.tellg() << endl;;


//Taking the get pointer at the zero byte location from the beginning of the file
ifstream_ob.seekg(10, ios::beg);

//Reading the content of the file again
while(ifstream_ob)
{
ch = ifstream_ob.get(); 
cout<<ch;
}

return 0;
}