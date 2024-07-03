#include<iostream>
using namespace std;
int main(){
    int n;
    float s, t;
    t=0;
    cout<<"\n Enter a number : ";
    cin>>n;
    
    s= n/2;
    while(s  != t){
     t= s;
     s = (n / t+t) / 2;
    }
   cout<<"\n The square root of is : "<<s;
   return 0;
}