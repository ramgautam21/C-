//WAP to create a menu based system for Health Club Membership.

#include<iostream>
using namespace std;

//function to calculate total amount
int calculation(int rate){
	int month,total;
	cout<<"Enter total number of months: ";
	cin>>month;
	
	//rate
	/*
	adult = 40
	child = 20
	senior = 60
	*/
	total = month*rate;
	return total;
}

int main(){
	
	int choice;
	do{
	cout<<"\t\t  Heath Club Membership"<<endl;
	cout<<"\t\t........................"<<endl;
	
	cout<<"\n1.Standard adult Membership\n2.Child Membership\n";
	cout<<"3.Senior Membership\n4.Quit the program.\n"<<endl;
	
	cout<<"\nEnter your choice: ";
	cin >>choice;
	
    const int ADULT = 40,
	CHILD = 20,
	SENIOR = 60;
	
	
		switch(choice){
			case 1:
				cout<<"\nTotal fee: $"<<calculation(ADULT)<<"\n\n"<<endl;
				break;			
		    
			case 2:
				cout<<"\nTotal fee: $"<<calculation(CHILD)<<"\n\n"<<endl;
				break;			
		    
			case 3:
				cout<<"\nTotal fee: $"<<calculation(SENIOR)<<endl;
				break;
				
			case 4:
				cout<<"\n\nExiting........";
			    break;			
		    
		    default:
		    	cout<<"\nWrong choice, Please proceed again."<<"\n\n"<<endl;	
		}
    }while(choice != 4);
	 
	return 0;
}
