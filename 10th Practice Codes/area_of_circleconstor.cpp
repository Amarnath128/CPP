// class and constructor.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Circle {
	private:
		float rad,area;
	public:
	 Circle() {
	 	cout<<"Enter the Radius of the Circle : "<<endl;
	 	cin>>rad;
	 }
	 void cal(float pi){
	
	 	area = pi* rad * rad;
	 }
	 void out() {
	 	cout<<"\n The Arae of the Circle Is : "<<area;
	 }
	 
  };
  int main()
  {
  	Circle ob;
  	ob.cal(3.14);
  	ob.out();
  	return 0;
  }
