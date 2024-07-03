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
	 	
	 	area = 3.14 * rad * rad;
	 }
	 void out() {
	 	cout<<"\n The Arae of the Circle Is : "<<area;
	 }
  };
  int main()
  {
  	Circle ob;
  	ob.out();
  	return 0;
  }
