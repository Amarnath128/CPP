// RECTANGLE PATTERN.
#include <iostream>
using namespace std;
int main() {
   int row, col;
   
   cout<<"Enter the Row : ";
   cin>>row;
   
   cout<<"\nEnter the Column : ";
   cin>>col;
     for(int i=1; i<=row; i++) {
     	for( int j=1; j<=col; j++) {
     		cout<<" * ";
		 }
	 cout<<endl;
	 }	
}
