#include <iostream>
using namespace std;

int main()
{
	int rollno, mark;
	 int sub_1, sub_2, sub_3;
	  float persent;

    	cout << "\n Enter the marks of C++ :";
    	cin >> sub_1;
	
        	cout << "\n Enter the marks of JAVA :";
	        cin >> sub_2;
	
             	cout << "\n Enter the marks of PYTHON :";
            	cin >> sub_3;
                
     	mark = sub_1 + sub_2 + sub_3;
		 cout<<"\n The Total Mark is : "<<mark;
        
		persent = mark/ 3;
	 
	 cout << "\n The Persent is = "<< persent<<" %";
	 return 0;
}