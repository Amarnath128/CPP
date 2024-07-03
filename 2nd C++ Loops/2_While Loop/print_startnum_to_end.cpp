#include<iostream>
using namespace std;
int main(){
 int st, ed, i;

    cout<<"\n Enter The Starting Point : ";
    cin>>st;
    cout<<"\n Enter The Ending Point : ";
    cin>>ed;
    
    i = st;                  // it will start from here , the number u entered at starting.
    while(i <= ed){          // end at the ending point that u  entered.
        cout<<endl<<i;
        i++;
    }
    return 0;
}