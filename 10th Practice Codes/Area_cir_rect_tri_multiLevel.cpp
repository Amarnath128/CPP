// program to calculate area of Triangle circle and Rectangle using Multi Inheritance.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Circle {
   private:
    float r, cr;
   public:
    void cir() {
        cout<<"\n Enter The Radius of Circle : ";
        cin>>r;
       cr = 3.14 * r * r;
       cout<<"\n the Area of the Circle is : "<<cr <<endl;
       cout<<"\n-------------------------------------------";
    } 
};
class Triangle : public Circle {
    private:
      float ta, h, b;
    public:
    void tri() {
        cout<<"\n Enter the Height and Base : ";
        cin>> h >>b;
        ta = 0.5 * h * b;
	 	cout<<"\n The Areaof the Triangle is : "<< ta <<endl;
        cout<<"\n------------------------------------------";
    }    
};
class Rectangle : public Triangle {
    private : 
     float ra, l, w;
    public :   
    void rect(){
        cout<<"\n Enter the Length and Weidth : ";
        cin>> l >> w;
        ra = 2 * l * w;
	 	cout<<"\n The Area of the Rectangle is : "<< ra <<endl;
         cout<<"\n -------------------------------------------";
  }
};
int main() {
    Rectangle ob;
     ob.cir();
     ob.rect();
     ob.tri();
  return 0;   
}