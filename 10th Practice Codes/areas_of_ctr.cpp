#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class  Area {
	private :
		float r,l,w,h,b;
		public:
	    Area(float ca,float ta, float ra) {
			cout<<"\n Enter the Radius of the circle : ";
			cin>>r;
	    	
	    	cout<<"\n Enter the length and Weidth of ractangle : ";
	    	cin>>l >>w;
	    	
	    	cout<<"\n Enter the Higth and Base of Triangle : ";
	    	cin>>h >>b;
		}
	void circle(float ca) {

		ca = 3.14 *r * r;
		cout<<"\n The Area of the circle is : "<< ca <<endl;
	}
	 void rect(float ra) {

	 	ra = 2 * l * w;
	 	cout<<"\n The Area of the Rectangle is : "<< ra <<endl;
	 }
	 void tri(float ta) {
		 
	 	ta = 0.5 * h * b;
	 	cout<<"\n The Areaof the Triangle is : "<< ta << endl;
	 }
};
    int main() {
    	
    	Area(ca, ra,ta);
    	Area.circle(ca);
    	Area.rect(ra);
    	Area.tri(ta);
    	
    	return 0;
	}
	 
