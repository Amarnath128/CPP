#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Student {
		private :
		char name[20];
		int  roll, m1, m2, m3; 
		int  tm;
		float per;
		
		public :
	void input()
	    {
	    cout<<"Enter Your Name : ";
	    	cin>> name;
	    	  cout<< "\n Enter you Roll_no : ";
	    	  cin>> roll;
	    cout<<"\n Enter the C MARK : ";
	    cin>> m1;
	    cout<<"\n Enter the C++ MARK : ";
	    cin>> m2;
	    cout<<"\n Enter the JAVA MARK : ";
	    cin>> m3;
	}
	
	void cal()
	{    
	    tm = m1 + m2 + m3;
	    
	    per = tm / 3;
			}	
        void output()
         {
           cout<<"\n your Nmae is "<<name;
            cout<<"\n your Roll no is "<<roll;
             cout<<"\n your Total Mark is "<<tm;
              cout<<"\n your Percentage is "<<per;
	}
	float  getper(){
	
			return per;
   }
   
		};
		
	int main()
	  {
	  	float p;
		 Student a;
		 a.input();
		 a.cal();
		 
		 cout<<"\n Enter the Expectation percentage that the Student has to Secured:";
		 cin>>p;
		 
		 if(a. getper() > p) {
		 	cout<<"\n The student has Secured more than Users Expectation.";
		 }
		 else {
		 	cout<<"\n The student has NOT.. Secured more than Users Expectation.";
		 }
		 a.output();
		getch(); 
	}	
