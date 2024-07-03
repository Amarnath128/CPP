// WAP in c++ to Display the Employee Detailas using Single inheritance.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Emp {
    private : 
      int emp_id;
      char ename[30];
    public:
     void a() {
          cout<<"\n Enter the Emp ID : ";
          cin>>emp_id;

          cout<<"\n Enter the Employee Name : ";
          cin>>ename;
          cout<<"\n --------------------------------------";
     }  
     void b() {
         cout<<"\n The Employee ID is : "<<emp_id;
         cout<<"\n The Employee Name is : "<<ename;
     }
};
class Emp2 : public Emp {
    private:
     int sal;
     char add[30];
    public: 
   void c() {
       cout<<"\n Enter the Emp salary : ";
       cin>>sal;
       cout<<"\n Enter the Emp Address : ";
       cin>>add;
       cout<<"\n ----------------------------------------";
   }  
   void d() {
       cout<<"\n The Emp salary Is : "<<sal;
       cout<<"\n The Emp Address is : "<<add;
   }
};
int main() {
    Emp2 ob;
    ob.a();
    ob.b();
    ob.c();
    ob.d();
   return 0; 
}