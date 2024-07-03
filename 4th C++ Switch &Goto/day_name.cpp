#include <iostream>
using namespace std;
int main()
  {
 int n;
  	
  	cout<< "\n ENTER THE NUMBERS BETWEEN 1 to 7 : ";
  	cin>>n;
  	
  	switch(n)
  	{
  		case 1 :
  			cout<<"\n Monday";
  			break;
  		case 2 :
  			cout<<"\n Tuesday";
  			break;

		case 3 :
  			cout<<"\n Wednesday";
              break;

		case 4 :
  			cout<<"\n thursday";
  			break;

		case 5 :
            cout<<"\nFriday";
            break;

        case 6 :
            cout<<"\n Saturday";
            break;

        case 7 :
            cout<<"\nSunday";
            break;
         default:
         cout<<"\n Invalid !";
      }
      return 0;
  }    