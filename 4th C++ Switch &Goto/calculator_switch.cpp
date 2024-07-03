// Program to create a simple calculator.
#include <iostream>
using namespace std;
int main()
  {
  	char op;
  	int n1,n2,ans;
  	
  	cout<< " ENTER ANY ONE OPERATOR ( + , - , * , / ) : ";
  	cin>> op;
  	
  	cout<< "\n ENTER THE TWO NUMBERS : "<<endl;
  	cin>> n1 >> n2;
  	
  	switch(op)
  	{
  		case '+' :
  			ans=n1+n2;
  			cout<< n1 <<" + " <<n2 <<" : " <<ans;
  			break;
  		case '-' :
  			ans=n1-n2;
  			cout<< n1 <<" - " <<n2 <<" : " <<ans;
  			break;
		case '*' :
  			ans=n1*n2;
  			cout<< n1 <<" * " <<n2 <<" : " <<ans;
  			break;
		case '/' :
  			ans=n1/n2;
  			cout<< n1 <<" / " <<n2 <<" : " <<ans;
  			break;
		default : 
		   cout<< "\n ERROR! ..."<<endl <<"OPERATOR IS NOT CORRECT.";	  		  	  	
	  }
	  return 0;
  }
