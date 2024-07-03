// area of circle, rectangle, triangle.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Math {
	private:
		int ra,rp,ta,tp;
	public:
	  void rectarea(int l, int w) {          // rectangle  area
	  	ra = l*w;
	  	cout<<"\n The area of the Rectangle : "<<ra<<endl;
	  	
	  }
	  void rectpara(int l1, int w2) {       // rectanglr parameter
	  	rp = 2*(l1+w2);
	  	cout<<"\n The perimeter of Rectangle : "<<rp<<endl;
	  }
	  void triarea(int b, int h) {                       // triangle area
	  	ta = 0.5*(b*h);
	  	cout<<"\n The area of Triangle : "<<ta<<endl;
		  	  }
	  void tripara(int a2, int b2, int c2) {            // trinagle parameter
	  	tp = a2+b2+c2;
	  	cout<<"\n The perimeter of Triangle : "<<tp<<endl;
	  }	 
  };
   int main() {
   	
   	int n1,n2,n3,n4,n5,n6;
   	cout<<"Enter the Length and Weidth of Rectangle : "<<endl;
   	cin>> n1>>n2;
   	
   	cout<<"Enter the Triangles Aside, Bside, Cside : "<<endl;
   	cin>> n3>>n4>>n5;
   	
   	cout<<"\n Enter the Height of Triangle : "<<endl;
   	cin>>n6;
   	Math ap;
   	ap.rectarea(n1,n2);
   	ap.rectpara(n1,n2);
   	ap.triarea(n4,n6);
   	ap.tripara(n3,n4,n5);
   	
   	return 0;
   }
