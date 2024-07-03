#include <iostream>
using namespace std;
int main() {
	
	int year;
	
	cout<<"Enter the year: ";
	cin>>year;
	
	 Bca_1st:{
	
	 	cout<<" You are the BCA 1st Year Student.";
	    cout<<"\n Your Subjects are: c\n ds\n cf.";
	}
	 Bca_2nd:{
	 	
	 	cout<<" You are the BCA 2nd Year Student.";
	    cout<<"\n Your Subjects are: c++\n os\n oracle.";
	}
	 Bca_3rd:{
	 	
	 	cout<<" You are the BCA 3rd Year Student.";
	    cout<<"\n Your Subjects are: Java\n ds\n os.";
	}
	
	if(year == 2020) {
		goto Bca_2nd;
	}
	else if(year == 2021) {
		goto Bca_3rd;
	}
	else if(year == 2019) {
		goto Bca_1st;
	}
	else {
		cout<<"\n ERROR! Something Want Wrong.";
	}
	return 0;			
}
