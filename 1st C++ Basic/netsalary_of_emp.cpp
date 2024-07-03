//   *  write a program input salary of the employee display the net salary by calculating
//      these statements.
//       1.) DA = 35% ,  2.)hra = 25% , 3.)tax = 15% grose salary. find outthe net salary.

#include <iostream>
using namespace std;
 int main()
 {
 	int sal;
 	float da,hra,tax,gros;
	 float netsal;
 	
 	cout << "\n Enter your Salary: ";
 	cin >> sal;
 	
 	da = sal * 0.35;
 	hra = sal* 0.25;
 	tax = sal * 0.15;
 	 
 	gros = sal + da + hra;
 	
 	netsal = gros - tax;
 	cout << "\n Your Netsalary is : " << netsal;
 	
	 return 0;
 }



