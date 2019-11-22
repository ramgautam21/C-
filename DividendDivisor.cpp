//Wap to find the continously find quotients reminder when the user inputs divided & diviser.

#include<iostream>
using namespace std;

int main(){
	
	int dividend,divisor,quotient,reminder;
	char decision;
	
	here:
	cout<<"Enter Dividend: ";
	cin>>dividend;
	
	cout<<"Enter Divisor: ";
	cin>>divisor;
	
	quotient=dividend/divisor;
	reminder=dividend%divisor;
	
	cout<<"\nQuotient is: "<<quotient<<endl;
	cout<<"Reminder is: "<<reminder<<endl;
	
	there:
	cout<<"\nDo you want to do another calculation?"<<endl<<"If Yes enter 'Y' if No enter 'N': ";
	cin>>decision;
	
	if(decision == 'Y' || decision=='y'){
		cout<<"\n";
		goto here;
	}
	else if(decision == 'N'|| decision=='n'){
		cout<<"\nExiting..."<<endl;
		exit(0);
	}
	else{
		cout<<"\nInvalid Input."<<endl;
		goto there;
	}
	return 0;
}

