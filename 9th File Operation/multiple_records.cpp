#include <iostream>
#include <fstream>     // for file handling 
#include <conio.h>
using namespace std;
int main()
{
   ofstream fileout("student.txt");     // ofstream is a keyword ,  fileout is the user defined object.
   int roll;                           // "student.txt" = is the file name that will create automaticaly after the execution.
   char name[30];
   char ans;
   
   do
   {
    cout<<"\n Enter the Rollno : ";
    cin>> roll;
    cout<<"\n Enter the Name : ";
    cin>> name;
    
    fileout <<"The roll no is :  "<<roll <<endl<<"The name is : "<<name;   // here the 'fileout' is the obj that has used to call ......
    cout<<"\n Do you want to add another file y / n : ";
    cin >> ans;
}
 while(ans == 'y');
 fileout.close();               // then at last the fileout , object will be closed .

 return 0;
}
