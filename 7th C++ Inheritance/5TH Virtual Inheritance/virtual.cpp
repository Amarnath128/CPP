//                                   :  virtual Inheritance   :
#include <iostream>  
#include <stdio.h>
#include <conio.h>
using namespace std;
class Add {                             // virtual / Base Class
	public:
	char add[30];
	
	void a(){
		cout<<"\n Enter Your Address : ";
		cin>>add;
		  cout<<"\n Your Address is : "<< add;
			
		} 
};
class Student : virtual public Add {                // here virtual member func is used
		public:
			
		char name[20];
	    int roll;

		void b() {
			cout<<"\n Enter Your Name : ";
			cin>>name;
			 cout<<"\n Enter Your Roll No : ";
			 cin>>roll;
			   cout<<"\n Your Name is : "<<name<<endl;
			   cout<<"\nYour Roll No : "<<roll<<endl;
			   
	}	
};
class Mark : virtual public Add {               // here virtual member func is used
	public:
		int tm, m1, m2, m3;
	   float per;
		void c() {
	      cout<<"\n Enter Your Three Subjects Marks : ";
		  cin>>m1 >>m2 >>m3;
	        tm = m1 + m2 + m3;
	        per = tm/3;		  
			
			     cout<<"\nYour Total Mark is : "<<tm<<endl;
			       cout<<"\nYour Percentage is : "<<per<<endl;
			       
		}
};
class College {
	public:

		char colname[20], coladd[20];
		int  colpin;
			void d(){

		cout<<"\n Enter the College Name : ";
		cin>>colname;
		 cout<<"\n Enter The College Address : ";
		 cin>>coladd;
		  cout<<"\n Enter the College Pincode : ";
		  cin>>colpin;
		  
		  cout<<"\n Your College Name is : "<<colname;
		  cout<<"\n Your College Add is : "<<coladd;
		  cout<<"\n Your college pincode : "<<colpin;
	}
}; 
 int main() {
   Mark ob;
   ob.a();
   Student ob1;
   ob1.b();
    College obj;
	obj.d();
 	return 0;
 }
