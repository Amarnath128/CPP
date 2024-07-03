// Program t check Leap Year or not.
#include<iostream>
using namespace std;
int main() {
	int y;
	
   	 cout <<" Enter a Year : ";
	 cin >> y;
     
	 if(y % 4 == 0){
	  cout<<endl << y<<"  is a Leap Year.";
	  if(y % 400 == 0){
		  cout<<endl<< y<<"  is a Leap Year.";
	  }
	 }
	  else if(y % 100 != 0){
		  cout<<endl<< y <<"  is not a Leap Year.";
	  }
	  else {
		  cout<<endl<<"\n PLZ ENTER A CORRECT YEAR.";
	 }
	  return 0;
  }	 
