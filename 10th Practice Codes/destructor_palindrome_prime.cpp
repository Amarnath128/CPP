// destructor.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Pp {
	private:
		int num1, n, rev=0, remind;
		int num2, i, m=0, count=0;
	public:
	    Pp() {
	    	cout<< "_____________PALINDROME____________"<<endl;
	    	cout<<endl<<" Enter the 1st to Check palindrom : ";
	    	cin>>num2;
	    num1=n;     // the number will be stored here.
	    
		remind=n%10;     // the numbers mod value = remind.
		
		rev=rev*10+remind;    //num + 10 * num.
	    
			if(n == rev)
		 {
		 	cout<<"\n The Number is Palindrome."<<endl;
		 }
		 else {
		 	cout<<"\n The Number Not a Palindrome."<<endl;
		 }
	}
		~Pp() 
		{ 
		
		 cout<<"\n______________PRIME NUMBER_____________" <<endl;
		 cout<<endl<<" Enter the 2nd number to Check Prime or not : ";
		 cin>>num2;
		 
		 m = num2/2;
		 
		 for(i=2;i<=m;i++)    
		 {
		 	if(num2 % i == 0)     
		 	{
		 		
		 		cout<<"\n Number is not Prime number."<<endl;
		 		count = 1;   // if it is div by all 
			 }
			 }	
			 if(count == 0) 
			  {
			  	cout<<"\n Number is Prime number."<<endl;
			  }         
		 } 
};

        int main() {
        	Pp D;     //class obj.
        	
        	return 0;
		}
