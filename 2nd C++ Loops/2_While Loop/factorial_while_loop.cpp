// find the factorial. using while Loop. 
// Like if user enters 6 then Factorial should be equal to factorial= 1*2*3*4*5*6.
#include <iostream>
using namespace std;
int main() {
	int num, i, fact=1;
	
	cout<<"Enter the number : ";
    cin>>num;
	i=1;
	while(i<=num)
	 {  
	   fact=fact*i;
	   	i++;
}
	 cout<<"\n The Factorial "<<num <<endl;
	 cout<<"is : "<< fact;
	 return 0;
}
