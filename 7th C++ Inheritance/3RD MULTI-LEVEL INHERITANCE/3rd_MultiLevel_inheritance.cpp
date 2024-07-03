/*  3) MultiLevel Inheritance - A derived Class is created from another derived Class.
-------------------------------------------->
SYNTAX : 
   Class DERIEV_CLASS : public BASE_CLASS{

   };
-------------------------------------------->
EXAMPLE: 
       Class A {
            code.....  ;
      };
       Class B : public A {
             code.....   ;
      };
       Class C  : public B {
      };
-------------------------------------------->
 */
#include <iostream>
using namespace std;
class Add {
  private : 
      int a, b, sum;
  public : 
    void input1() {
          cout<<"\n  For SUM Enter the two numbers  : ";
          cin>>a >>b;
    }
     void display1() {
           sum = a + b;
           cout<<"\n The sum of the two numbers is : "<<sum <<endl;
     }
};
class Subct : public Add {
  private : 
      int n1, n2, subt;
  public : 
    void input2() {
          cout<<"\n For SUBTRACTION Enter the two numbers : ";
          cin>>n1 >>n2;
     }
     void display2() {
           subt = n1 - n2;
           cout<<"\n The subtraction of the numbers is : "<<subt <<endl;
     }
};
class Multi : public Subct {
  private : 
      int num1, num2, mult;
  public : 
    void input3() {
          cout<<"\nFor MULTIPLICATION Enter the two numbers : ";
          cin>>num1 >>num2;
     }
     void display3() {
           mult = num1 * num2;
           cout<<"\n The Multiplication of the numbers is : "<<mult <<endl;
     }
};
class Divi : public Multi {
  private : 
      int x, y, div;
  public : 
    void input4() {
          cout<<"\nFor DIVISION Enter the two numbers : ";
          cin>>x >>y;
     }
     void display4() {
           div = x / y;
           cout<<"\n The Divion of the numbers is : "<<div <<endl;
     }
};
class Modu : public Divi {
  private : 
      int p, q, modu;
  public : 
    void input5() {
          cout<<"\nFor MODULASION Enter the two numbers : ";
          cin>>p >>q;
     }
     void display5() {
           modu = p % q;
           cout<<"\n The  MODULASION of the numbers is : "<<modu <<endl;
     }
};
int main() {
      Modu m;
       m.input1();
       m.display1();
        m.input2();
        m.display2();
         m.input3();
         m.display3();
          m.input4();
          m.display4();
           m.input5();
           m.display5();
      return 0;     
}