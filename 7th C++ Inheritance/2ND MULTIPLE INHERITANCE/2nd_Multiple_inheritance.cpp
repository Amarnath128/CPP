/* 2)  Multiple Inheritance - if One Class is Derived from more than Classes, i.e one sub_class  is inherited from more than one Base Classes.
-------------------------------------------------------------------------------->
SYNTAX :  
  Class C(derive_class) : public A(base_class) , public B(base_class)  {

  };
-------------------------------------------------------------------------------->  
EXAMPLE : 
   cLASS A {
       code.. ;
   };
   Class B {
   };
   Class C : public A , public B {
       code.. ;
   };
-------------------------------------------------------------------------------->
 */
#include <iostream>
using namespace std;
class Std {           //-------> Base_class_1
    private : 
      int roll;
      char name[21];
    public :
      void a(){       // .......> func_1
          cout<<"\n Enter the Student Name : ";
          cin>> name;
           cout<<"\n Enter the Student Roll number : ";
           cin>> roll;
      }  
      void a1(){     //.........> func_2
          cout<<"\n Your Name is : "<<name;
          cout<<"\n Your Roll no : "<<roll;
      }
};
class Mark {         //--------> Base_class_2
    private :
      int m1, m2, m3, tm;
      float per;
    public :
     void b() {      // .......> func_4
         cout<<"\n Enter the three Subjects marks : ";
         cin>>m1 >>m2 >>m3;
       tm = m1 + m2 + m3;
        per = tm / 3;  
    
    cout<<"\n Your Total Mark : "<<tm;
    cout<<"\n Your Persentage : "<<per;    
     }
};
class Add : public Std, public Mark {       //-------> (Add)_Derive_class_3
   private:
    char adds[30];
   public : 
     void c(){      //......> func_5
   cout<<"\n Enter your Address : ";
   cin>>adds;
   cout<<"\n Your Address is : "<<adds;
     } 
};
int main() {
    Add obj;
    obj.a();
    obj.a1();
    obj.b();
    obj.c();
  return 0;  
}