#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Add {
    private : 
     int adds, a, b;
    public :
     void ab() {
         cout<<"\n Enter 2 number for Addition : ";
         cin>>a >>b;
         adds = a + b;
         cout<<endl <<a <<" + " <<b <<" = "<<adds;
     } 
};
class Sub : public Add {
      private : 
     int sub, n1, n2;
    public :
     void s() {
         cout<<"\n Enter 2 number for Subtraction : ";
         cin>>n1 >>n2;
         sub = n1 - n2;
         cout<<endl <<n1 <<" - " <<n2 <<" = "<<sub;
     } 
};
class Multi : public Add {
    private : 
     int mult, x, y;
    public :
     void m() {
         cout<<"\n Enter 2 number for Multiplication : ";
         cin>>x>>y;
        mult = x * y;
         cout<<endl <<x <<" * " <<y <<" = "<<mult;
     } 
};
class Div : public Add , public Sub, public Multi {
    private : 
     int div, p, q;
    public :
     void d() {
         cout<<"\n Enter 2 number for Division : ";
         cin>>p >>q;
         div = p / q;
         cout<<endl <<p <<" / " <<q <<" = "<<div;
     } 
};
int main() 
 {
   Add ob;
   ob.ab();  
   Div fun;
   fun.s();
   fun.m();
   fun.d();

  return 0;  
}