// program to find Addition, substraction, Multiplication,
// using  class , function and passing parameter.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Math {
	private:
	  int add, sub, mult;               // Variables declared 
	  
	public:
	 void ad(int num1, int num2) 
	     {
	     	add = num1 + num2;          // Addition of the 2 numbers.
	     	cout<<"\n The addition of the 2 numbers are : " <<add<<endl;
			 		   } 
			 		   
	 void subct(int x, int y)
	     {
	     	sub = x - y;                // Substraction of the 2 numbers
	     	cout<<"\n The Substraction of the 2 numbers are : "<<sub <<endl;
							  }
							  
	 void mul(int g , int f)
	     {
	        mult = g * f;               // Multiplication of the 2 numbers
			cout<<"\n The Multiplication of the 2 numbers are : "<<mult << endl;	
	     	
							}						  					 
};
        int main() {
        	int a,b;
        	cout<<"\n Enter the 2 numbers : ";    // here values are taken by the user.
        	cin>>a >>b;
        	
        	Math d;
        	d.ad(a,b);      // void ad(int num1, int num2) * num1 and num2 repalced to a and b.
			      
        	d.subct(a,b);   // void subct(int x, int y)    * x and y replaced to a and b.
        	
        	d.mul(a,b);     // void mul(int g , int f)     * g and f replaced to a and b.
        return 0;	
		}

