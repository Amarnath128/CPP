//                                   :   Hierarchal Inheritance   :
#include <iostream>  
#include <stdio.h>
#include <conio.h>
using namespace std;
class A {                             // Base Class
	public:	
	char name[20];
	 int roll;
	   	
		void a() {
			cout<<" Enter Your Name : ";
			cin>>name;
			 cout<<"\n Enter Your Roll No : ";
			 cin>>roll;
			   cout<<"\n Your Name is : "<<name<<endl;
			   cout<<"Your Roll No : "<<roll<<endl;
				
		} 
};
class B : public A {                // B [ derived Class ]
	public:
	char add[30];
	void b(){
		cout<<"\n Enter Your Address : ";
		cin>>add;
		  cout<<"Your Address is : "<< add;
	}	
};
class C : public A {                // C [ derived Class ]
	public:
		int tm, m1, m2, m3;
	   float per;
		void c() {
	      cout<<"\n Enter Your Three Subjects Marks : ";
		  cin>>m1 >>m2 >>m3;
	        tm = m1 + m2 + m3;
	        per = tm/3;		  
			
			     cout<<"Your Total Mark is : "<<tm<<endl;
			       cout<<"Your Percentage is : "<<per<<endl;
			       
		}
};
 int main() {
    
    B obj;
    obj.a();
    obj.b();
    
    C obj1;
    obj1.c();
    
 	return 0;
 }
