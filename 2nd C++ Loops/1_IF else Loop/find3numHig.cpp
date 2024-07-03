//  input 3 num find higest .
 #include <iostream>
 using namespace std;
  int main()
  {
  	int a,b,c;
  	
  	cout << "\n Enter the first number = ";
  	cin>> a;
  	cout << "\n Enter the second number = ";
  	cin>> b;
  	cout << "\n Enter the third number = ";
  	cin>> c;
  	 if ( a>b && a>c)
	 cout<<"\n The Greatest is "<<a;
  	 if ( b>c)
	    cout<<"\n The Greatest is "<<b;
  	 else
	 cout << "\n The Greater is = " <<c; 
	  return 0;

  }