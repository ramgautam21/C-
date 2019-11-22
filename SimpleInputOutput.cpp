//WAP to use sales figures for 3 days and show sales of each day and total in table.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	double day1,day2,day3;
	
	cout<<"Enter sales for day 1: ";
	cin>>day1;
	cout<<"Enter sales for day 2: ";
	cin>>day2;
	cout<<"Enter sales for day 3: ";
	cin>>day3;
	
	cout<<"\nSales Figures"<<endl;
	cout<<"................."<<endl;
	
	cout<<setprecision(2)<<showpoint<<fixed;
	//setpricision helps to show all number insted of showing e.
	cout<<"Day 1: "<<setw(12)<<day1<<endl;
	/*setw helps to follow billing pattern for eg:  123.10
	                                               4567.10
	                                                  1.20
	*/
	cout<<"Day 2: "<<setw(12)<<day2<<endl;
	cout<<"Day 3: "<<setw(12)<<day3<<endl;
	
	cout<<"\nTotal: "<<day1+day2+day3<<endl;
	cout<<"Average: "<<(day1+day2+day3)/3<<endl;
	
	return 0;
}

