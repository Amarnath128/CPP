// swap 2 number without using 3rd variable.
#include <iostream>
using namespace std;
int main() {
	int x,y;
	cout<<"       Before Swap : "<<endl;
	cout<<"\n Enter the value of X : ";
	cin>>x;
	
	cout<<"\n Enter th value of Y : ";
	cin>>y;
	
	x = x + y;
	 y = x - y;
	  x = x - y;
	cout<<"\n      After Swap : "<<endl;
	 cout<<"\n The Value of  X = "<<x;
	 cout<<"\n The Value of Y = "<<y;
	 return 0;  
}
