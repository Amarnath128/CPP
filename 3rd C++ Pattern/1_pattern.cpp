#include <iostream>
using namespace std;
int main() {
	int row,col;
	
	cout<<"The 1 Pattern : "<<endl;
	for(row=1; row<=5; row++) {
		for(col=1; col<=5; col++) {
			if(col==3 ) {
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
