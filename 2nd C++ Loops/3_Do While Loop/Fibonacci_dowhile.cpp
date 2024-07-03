#include <iostream>
using namespace std;
int main(){
    int num, a=0, b=1, c;
    cout<<"\n Enter the Limit you want : ";
    cin>> num;
    cout<<" 0  1 ";
     do {
         c = a + b;         // 1 = 0 + 1 , 2=1+1, 3 = 1 + 2. 
         cout<<c<<" ";
         a = b;            
         b = c;
         num--;
     }
    while(num > 2);        // ends at the number that u entered in limit.

    return 0; 
}