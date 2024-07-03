#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Disha {
		private :
		char name[20];
		int  roll, sub1, sub2, sub3, sub4, sub5, sub6; 
		int  tm;
		float per;
		
		public :
	void input();
	void output();
};
    void Disha :: input()
	    {
	    cout<<"Enter Your Name : ";
	    	cin>> name;
	    	  cout<< "\n Enter you Roll_no : ";
	    	  cin>> roll;
	    cout<<"\n Enter the OS MARK : ";
	    cin>> sub1;
	    cout<<"\n Enter the CO MARK : ";
	    cin>> sub2;
	    cout<<"\n Enter the C++ MARK : ";
	    cin>> sub3;
	    cout<<"\n Enter the MATH MARK : ";
	    cin>> sub4;
	    cout<<"\n Enter the DBMS MARK : ";
	    cin>> sub5;
	    cout<<"\n Enter the ORACLE MARK : ";
	    cin>> sub6;
	
	   
	    tm = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
	    
	    per = tm / 6;
			}	
        void Disha :: output()
         {
         	cout<< "\n Your Total Mark is : "<< tm;
         	cout<< "\n Your Percentage is : "<< per;
         	
         	if(per>90) {
         		cout<<"\n Your Grade Is 'A'.";
			 }
			 else if(per >= 70 && per <= 89){
			    cout<<"\n Your Grade Is 'B'.";
			}
		     else if(per >= 60 && per <= 69){
		        cout<<"\n Your Grade Is 'C'.";
		    }
		    else if(per >= 50 && per <= 59) {
		    	cout<<"\n Your Grade Is 'D'.";
			}
			else if(per<30){
				cout<<"\n You Are Fail.";
			}
			else {
				cout<<"\n SOMETHING WANT WRONG.";
			}
		 }
		
	int main()
	  {
		
		 Disha a;
		 a.input();
		 a.output();
		getch(); 
	}	
