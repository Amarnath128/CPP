//                 Find the LCM of 2 numbers.
#include<iostream>
using namespace std;
int main(){
int a, b, lc, count=1;

    cout<<"\n Input The First Number : ";
    cin>>a;
    cout<<"\n Input The Second Number : ";
    cin>>b;
  lc = (a > b) ? a : b;     // the num which is greater.

  while(count){
                           // condition for LCM.
      if(lc % a == 0 && lc % b == 0){  
          cout<<endl<<"\n ....The LCM of...."<<endl <<a<<"  and  "<<b <<" is : "<<lc;
          break;
    }
      ++lc;
  }
  return 0;
}