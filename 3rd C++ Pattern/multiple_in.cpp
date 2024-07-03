//                               Multiple Inheritance
#include <iostream>  
#include <stdio.h>
#include <conio.h>
using namespace std;
class Student {                // Class 1
	public:	
	char name[20];
			int roll;
		void a1() {
			cout<<"Enter Your Name : ";
			cin>>name;
			 cout<<"\n Enter Your Roll No : ";
			 cin>>roll;
		}
}; 
class Mark {                          // class 2
	public:
		int tm,m1,m2,m3;
		float per;	
	    void b1() {
	      cout<<"\nEnter Your Three Subjects Marks : ";
		  cin>>m1 >>m2 >>m3;
	        tm = m1 + m2 + m3;
	        per = tm/3;		  		
		} 
};
class Add {                     // class 3
	public:
		char add[30];
	void c3() {
		cout<<"\n Enter Your Address : ";
		cin>>add;
	}	
};
class All : public Student, public Mark, public Add {     // All class are given the Access
	public:
		void d4() {
			cout<<"\n Your Name is : "<<name<<endl;
			 cout<<"Your Roll No : "<<roll<<endl;
			  cout<<"Your Total Mark is : "<<tm<<endl;
			   cout<<"Your Percentage is : "<<per<<endl;
			    cout<<"Your Address is : "<<add;
		}
};
 int main(){
 	
 	All obj;           // the derived Class Name has taken for calling the all fun()
 	obj.a1();
 	obj.b1();
 	obj.c3();
 	obj.d4();
 	return 0;
 }
