  /*  1) single inheritance - if a base class having only one derived class then it is called Single inheritance.
--------------------------------------------------------------------->  
SYNTAX :  
   Class B(DERIVE_CLASS) : public A(BASE_CLASS) {

   };
--------------------------------------------------------------------->   
EXAMPLE :
    Class A {
      code.....;
    };
    Class B : public A{
      code.....;
    };
---------------------------------------------------------------------->
 */
#include <iostream>
using namespace std;
class A {            //  Class_1_Base_class
  private:
          //  data 
            int a, b, sum;
  public:
         //function
   void in() {      // func_1
       cout<<"\n Enter the First Number : ";
       cin>>a;
        cout<<"\n Enter the Second Number : ";
       cin>>b;
  }
    void out() {    // func_2
      sum = a + b;
      cout<<"\n The Addition of two numbers is :"<<sum<<endl; 
  } 
};
class B : public A {        // class_2 Derived_class
  private:
   int num1, num2, sub;
  public:
   void in2() {       // func_3
      cout<<"\n Enter the Two numbers : ";
      cin>>num1 >>num2;
  } 
   void out2() {     // fun_4
     sub = num1 - num2;
     cout<<"\n The subtraction of two numbers : "<<sub;
   }
};
int main() {     
     B obj;      /* the 'obj' is the object, from this we can call all the Functions over here */
     obj.in();
     obj.out();
     obj.in2();
     obj.out2();
    return 0; 
}
