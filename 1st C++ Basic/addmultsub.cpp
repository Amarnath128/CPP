#include<iostream>
using namespace std;
int main() {
    int a, b, ans;

    cout<<"Enter the 2 number for all Calculations : ";
    cin>>a >>b;

     ans = a + b;
    cout<<"\n The addition of two number is : "<<ans<<endl;
     ans = a - b;
    cout<<"\n The Substraction of two number is : "<<ans<<endl;
      ans = a * b;
    cout<<"\n The Multiplication of two number is : "<<ans<<endl; 
      ans = a / b;
    cout<<"\n The Division of two number is : "<<ans<<endl;
      ans = a % b;
    cout<<"\n The Moduletion of two number is : "<<ans<<endl;
    return 0; 
}