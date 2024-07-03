// 4 pattern.
#include <iostream>
using namespace std;
int main() {
	int i, j;
	cout<<"The 3 Pattern : "<<endl;
	     for(i=1; i<=5; i++){
	     	for(j=1; j<=5; j++){
	     		
	     		if(i==3 || j==5 || j==1 && i<=3){
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
