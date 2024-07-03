#include <iostream>
using namespace std;
class Complex {
 public :
  int x, y;
 public :
  void input() {
      cout<<"\n Enter two Number i.e, a+bi : ";
      cin>>x >>y;
  } 

Complex operator +(Complex obj) {    // for Addition .
    Complex A;
    A.x = x + obj.x;
    A.y = y + obj.y;
  return A;  
}
 Complex operator -(Complex obj) {    // for Subtraction .
     Complex A;
     A.x = x-obj.x;
     A.y = y-obj.y;
     return A;
 }
 void output() {
      cout<<endl <<x <<" + "<<y <<" i"<<endl;
    }
  void output2() {
      cout<<endl <<x <<" - "<<y <<" i"<<endl;
    }
  };
  int main() {

      Complex obj1, obj2, sum, sub;
     obj1.input();
     obj1.input();
     sum = obj1 + obj2;
     sub = obj1 - obj2;
     
      cout<<endl;

       cout<<"\n Addition of two complex no : ";
       sum.output();
       cout<<"\n Subtraction of Two Complex no : ";
       sub.output2();
       
     return 0;   
  }