// Constructor Overloading.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Area {
	
	private: 
	  float ca,ta,ra;
	public:
	  Area(float r)
	  {
	  	ca = 3.14 * r * r;
	  	
	  	cout<<"The Area of Cricle is : "<<ca <<endl;
		  }	
		Area(float b , float h)
		{
			ta = 0.5 * b * h;
			cout<<"\n The Area of the Triangle is : "<<ta <<endl;
		  }  
		Area(int l ,int w)
		  {
		  	ra = 2 * l * w;
		  	cout<<"\n The Area of the Reactangle is : "<<ra<<endl;
			}  
};
    int main() 
    {
    	float rad, bas, hig, len, wid;
    	
    	cout<<"\n Enter the radius of the Circle : "<<endl;
    	cin>>rad;
    	
    	Area c(rad);
    	
    	cout<<"\n Enter the Base and Height of Triangle : "<<endl;
    	cin>> bas >>hig;
    	
    	Area t(bas, hig);
    	
    	cout<<"\n Enter the Length and Width of the Rectangle : "<<endl;
    	cin>>len >>wid;
    	
    	Area r(len, wid);
    	
    	return 0;
	}
