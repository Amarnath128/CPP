//  input 3 num find higest .
#include<conio.h>
 #include <iostream>
 using namespace std;
  int main()
  {
  	int a,b,c, hi;
  	
  	cout << "\n Enter the first number =";
  	cin>> a;
  	cout << "\n Enter the second number =";
  	cin>> b;
  	cout << "\n Enter the third number =";
  	cin>> c;
  	 if ( a>b && a>c)
	  hi=a;
  	 else if ( b>c)
	  hi=b;
  	 else
	  hi=c;
	 cout << "\n Highest is =" << hi; 
	 getch();
	  return 0;

	    	
  }
