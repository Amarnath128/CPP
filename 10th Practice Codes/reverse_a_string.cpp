//  C++ Program to Reverse a String.

#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
     char str[50], transport;
     int i, j;
    cout << "Enter a string : ";
    cin>>str;
    j = strlen(str) - 1;               // strlen() : it is an function to find the 
      for (i = 0; i < j; i++,j--)     //  LENGTH of the given string.
    {
        transport = str[i];  
        str[i] = str[j];
        str[j] = transport;
    }
    cout << "\n Reverse string : " << str;
    return 0;
}
