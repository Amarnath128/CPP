 //  program to input student name ,rollno, their mark of there subject and
 //  persentage and then display.
#include <iostream>
using namespace std;

int main()
{
	int rollno, mark;
	 int sub_1, sub_2, sub_3, sub_4, sub_5;
	  float persent;
       char std [20];
	
	cout << "\n Enter the Student Name :";
	cin >> std;
	 
	 cout << "\n Enter the Student Roll No :";
	 cin >> rollno;
	
    	cout << "\n Enter the marks of math :";
    	cin >> sub_1;
	
        	cout << "\n Enter the marks of OS :";
	        cin >> sub_2;
	
             	cout << "\n Enter the marks of C++ :";
            	cin >> sub_3;
	
             	cout << "\n Enter the marks of CO :";
            	cin >> sub_4;
	
                	cout << "\n Enter the marks of DS :";
	                cin >> sub_5;
	
     	mark = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
        
		persent = mark/ 5;
	 
	 cout << "\n The Persent is =  "<< persent;
	 return 0;
}

