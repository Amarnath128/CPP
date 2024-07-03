#include <iostream>
using namespace std;
int main() {
	int num, i;
	float fact=1;
	
	cout<<"Enter the number : ";
	cin>> num;
	
	for(i=1;i<=num;i++)
	 {  
	   fact=fact*i;
}
	 	cout<<"\n The Factorial of "<<num <<" is " << fact;
	 return 0;
}
