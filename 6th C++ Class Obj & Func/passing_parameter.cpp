// using class, Function, and Parameters.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Student {
	private:
		int roll, s1, s2, s3, tm;
		float per;
		char name[20];
	public:
	 void input() {
	 	cout<<" Enter Your Name : ";
	 	cin>>name;
	 	cout<<"\n Enter Your Roll No :";
	 	cin>>roll;
	 	
	 	cout<<"\n Enter Mark of Math :";
	 	cin>>s1;
	 	cout<<"\n Enter Mark of Physics :";
	 	cin>>s2;
	 	cout<<"\n Enter Mark of Chemistry :";
	 	cin>>s3;
	 }	
	 void cal() {
	 	tm = s1 + s2 + s3;
	 	per = tm / 3;
	 }
	 void output(float p) {
	 	cal();
	 	cout<<"\n ________ The Student Details_______"<<endl;
	 	
	 	cout<<"\n Name is : "<<name<<endl;
	 	 cout<<"\n RollNo is : "<<roll<<endl;
	 	  cout<<"\n Total Mark is : "<<tm<<endl;
	 	   cout<<"\n Percentage is : "<<per<<endl;
	 
	 
	 if(per > p){
	 	cout<<"\n The Student Has Secured More Then The User's Exectation.";
	 }
	 else {
	 	cout<<"\n The Student Has Not Secured Much '%'.\n______Try Next Time_____";
	 }
 }
};
    int main() 
      {
      	float per1;
      	Student s;
      	s.input();
      	cout<<"\n Enter the percentage that the Student has to Secured : ";
      	 cin>>per1;
      	 s.output(per1);
      	 return 0;
	  }


