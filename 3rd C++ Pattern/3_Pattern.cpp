// 3 pattern.
#include <iostream>
using namespace std;
int main() {
	int row, col;
	cout<<"The 3 Pattern : "<<endl;
	     for(row=1; row<=7; row++){
	     	for(col=1; col<=4; col++){
	     		
	     		if(col==4 || row==1 || row==4 || row==7){
	     			cout<<"*";
				 }
				 else {
				 	cout<<" ";
				 }
			 }
			 cout<<endl;
		 }
	return 0;	 
}
