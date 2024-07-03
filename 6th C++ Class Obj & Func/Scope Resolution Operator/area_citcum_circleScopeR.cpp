#include<iostream>
using namespace std;
class Circle {
  private:

     float area, rad, cir;
  public:

   void a();
   void b();
};
      
    void Circle :: a(){
        cout<<"\n Enter the Radius : ";
        cin>>rad;
        area = 3.14 * rad * rad;     // Area of Circle condition
        
        cir = 2 * 3.14 * rad;        // Circumference  condition
    }
    void Circle :: b(){
         cout<<"\n The Area of Circle is : "<<area <<endl;
         
         cout<<"\n The Circumference is : "<<cir;
    }
int main(){

    Circle obj;
    obj.a();
    obj.b();

    return 0;
}