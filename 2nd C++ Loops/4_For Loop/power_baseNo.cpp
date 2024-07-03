#include<iostream>
using namespace std;
int main(){
    int b,i, ans = 1;
    cout<<"\n Enter the Base number : ";
    cin>>b;
    for(i=1; i<=b; i++){
        ans = ans * b;
    }
    cout<<"\n The answer is : "<<ans;
    return 0;
}