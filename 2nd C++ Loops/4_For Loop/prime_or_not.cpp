// program to check a number is prime or not.
#include <iostream>
using namespace std;
int main() 
 {
 	int n, m=0, i, flag=0;
 	cout<<"Enter a number : ";
 	cin>>n;
 	m=n/2;
 	
 	for(i=2; i<=m; i++)
 	   {
 	   	 if(n % i == 0) {
 	   	 	cout<< "\n The number is not Prime number.";
 	   	 	flag=1;
			 }
		}
		if(flag==0) {
			cout<<"\n The number is Prime number.";
		}
		return 0;
 }