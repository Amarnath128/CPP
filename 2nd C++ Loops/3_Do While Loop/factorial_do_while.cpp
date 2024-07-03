// Like if user enters 6 then Factorial should be equal to factorial= 1*2*3*4*5*6.
#include <iostream>
using namespace std;
int main() {
	int num, i;
    float fact=1;
	
	cout<<"Enter the number : ";
    cin>>num;
    i=1;

    do{
         fact=fact*i;
        i++;
    }
	 while(i<=num);
     cout<<"\n The Factorial of "<<num <<" is " << fact;
	 return 0;
}