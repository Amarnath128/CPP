#include <iostream>
using namespace std;
int main() {
	int row, col;
	cout<<" 2 Pattern : "<<endl;
	 for(row=1; row<=7; row++) {
	 	for(col=1; col<=5; col++) {
	 		if(row==1 || row==4 || row==7 ||col==5 && row<4|| (col==1 && row>=4)) {
	 			cout<<" *";
			 }
			 else {
			 	cout<<"  ";
			 }
		 }
		 cout<<endl;
	 }
	 return 0;
}
