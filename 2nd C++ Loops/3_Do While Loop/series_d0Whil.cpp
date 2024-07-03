#include<iostream>
using namespace std;
int main()
   {
    int s, e, i;
     cout<<"\n Starts from : ";
     cin>> s;
     cout<<"\n Ends at : ";
     cin>> e;

     i = s;         // starts from .
      do{
          cout<<i <<endl;
          i++;
      }
        while(i<=e);      // ends in .
    return 0;  
}