// enter two number and print all even numbers present between them
#include <iostream>
using namespace std;
int main()
{
	int a,b,x,y;
	cout<<"\n Enter two number ";
	cin>>a>>b;
	if(a>b)
	{
		x=a;y=b;
	}
	else
	{
		x=b; y=a;
	}
	while(y<=x)
	{
		if (y%2==0)
		cout<<y<<endl;
		y++;
	}
	
	
	 return 0;
}

