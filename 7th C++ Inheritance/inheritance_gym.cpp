// program using inheritance.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Gym1 {
	public:
		int gym_id;
		char name[30];
	void in_1() {
		cout<<"Enter Your Gym ID here : ";
		cin>>gym_id;
		   cout<<"\n Enter Your Name here : ";
		   cin>>name;
	}	
};
class Gym_2 : public Gym1 {
    public:
    	void in_2() {
		
    	int day;
    	
    	cout<<"\n Enter the Exrecise no for : 1.Chest,   2.Back,   3.Shoulder,  4.Biceps,   5.Triceps,   6.Leg : "<<endl;
    	cin>>day;
    	
     switch(day) {
	 
	 case 1:
	  
     	cout<<"\ The All Exercises for CHEST day are : \n 1.)Barbell Bench Press \n2.)Dumbbell Bench Press \n 3.)Incline DumbbellPress";
     	cout<<"\n 4.)Cable CrossOver\n5.) Chest press machine \n 6.)Dumbbell Flye\n 7.)Low Incline \n8.)Bench Press";
     	cout<<"\n9.)Pull Over\n10.)Brand-Resisted"<<endl;
     	break;
     
     case 2:
	  
     	cout<<"\n The All Exercises for BACK Day are : \n 1.)Pullups \n2.)Last Pull-Downs \n3.)Dumbbell-Rows\n4.)Seated Pulley Rows \n 5.)T-Bar Row";
     	cout<<"\n 6.)Heavy BB Shugs\n7.)Rope Crunches \n8.)Dumbbell pullup \n 9.)Dumbbell Dead Lift";
     	break;
     
    case 3:
	 
     	cout<<"\n The All Exercise for SHOULDER day are : \n1.)Pushups\n2.)Standing-Rod pullups front and back\n3.)Incline bench Press";
     	cout<<"\4.)Lateral raise \n5.)Overhead press \n 6.)Crab Walk \n 7.)Dumbbell Shoulders Push Press \n 8.)Crab Walk \n 9.)Prone-T\n10.)Cable face pulls";
     	break;
	 	
	case 4:
		
	 	cout<<"\n The All Exercise for Biceps day are :";
	 	cout<<"\n 1.)Alternating Incline Dumbbell Curl \n2.)Seated Hammer Curl\n3.)Standing Reverse Barbell curl\n4.)Standing Cable curl";
	 	cout<<"\n 5.)Standing Barebell Curl \n6.)Zottman Curl 7.)Decline Dumbbell Curl\n 8.)Concentraction Curl\n9.)Cable Flex Curl\n10.)preacher Curl \n10.)Bent over row";
	 	break;
	 
	 case 5:
	  
	 	cout<<"\n The All Exercise for triceps day are \n 1.)Diamand push-ups \n2.)Kickbacks \n3.)back-Dips\n4.)Overhead Triceps Extension\n5.)Rope PushDown \n6.)Bar PushDown";
	 	cout<<"\n7.)Lying Triceps Extension \n 8.)Close Grip Bench Presses.";
	 	break;
	 
	 case  6: 
	 
	 	cout<<"\n The All Exercise for Leg day are : \n 1.)Lunge \n2.)Leg Crul \n3.)Leg Extension\n 4.)Front Squat\n 5.)Nack-Squat \n6.)Leg Press\n7.)Seated Toe Raise";
	 	break;
	 
	 default :
	 	cout<<"\n Plz Enter the Valid Exercise.";
	 
    }
}
}; 

class Gym3 : public Gym_2 {
	public: 
	void in_3() {
	 	int month;
	cout<<"\n Enter the number of Months that you will do Exercise : "<<endl;
	cin>>month;	 
	
	cout<<"\n Your Gym ID is : "<<gym_id;
	cout<<"\n Your Name is :"<<name;
	cout<<"\n number of Months you will continue the Gym is : "<<month;
	
	cout<<"\n ___________________Beast House___________________";	
	}
};   
 int main() {
 	Gym3 ob;
 	ob.in_1();
 	ob.in_2();
 	ob.in_3();
 	
	 
	return 0;
 }
 
