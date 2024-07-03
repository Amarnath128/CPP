#include <iostream>
using namespace std;
class Std {
	private :
		char name[20], add[20];
		int  roll;
  public:

void a(){
    cout<<"\n Enter the Name : ";
    cin>> name;

    cout<<"\nEnter the roll no : ";
    cin>>roll;

    cout<<"\n Enter your Address : ";
    cin>> add;
    cout<<"\n >>...........................................>\n";
  }

void b(){
    cout<<"\n Your Name : "<<name <<endl;

    cout<<"\n Your Roll no : "<<roll <<endl;

    cout<<"\n Your Address : "<<add <<endl;
  }  
};      
int main(){
    Std obj;
    obj.a();
    obj.b();
   return 0; 
}   