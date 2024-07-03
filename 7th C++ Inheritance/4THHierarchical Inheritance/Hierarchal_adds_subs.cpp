// program to calculate add , sub  of two numbers using Heirarcahl Inheritance.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class A{
    public :
      void a() {
          cout<<"\n     --------Heirarchal Inheritance---------"<<endl;
          cout<<"\n ------------Addition and Subtraction--------------------"<<endl;
      }
};
class Add : public A{
     private : 
     int a, b, ans1;
    public :
         void add() {
         cout<<"\n Enter the two numbers : ";
         cin>> a >> b;
        ans1 = a + b;
         cout<<"\n  The Addition of the two numbers = "<<ans1;
   }
};
class Subs : public A{
       private : 
        int num1, num2, ans2;
     public :
          void sub() {
         cout<<"\n Enter the 2 numbers : ";
         cin>> num1  >>num2;

         ans2 = num1 - num2;
          cout<<"\n The substraction of two number is : "<<ans2;
      } 
};
int main(){
    A o;
    o.a();

    Add ob;
    ob.add();

    Subs obj;
    obj.sub();

   return 0; 
}
