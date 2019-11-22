//WAP a class Distance with two variables: feet, inch
//Write a default constructor with parameter to initialize the values of feet and inch.
/*implement exception handling(T,T,C) to check wheter the inches values 
    is less than 0
	OR
	Greater than 12*/ 
	
#include <iostream>
using namespace std;

class Distance{
	private:
		double feet;
		double inch;
		
	public:
		class Inches0Exp{};
		class Inches12Exp{};
		Distance(double f=0,double i=0){
			
			feet = f;
			inch = i;
			if(inch < 0){
				throw Inches0Exp();
			}
			if(inch > 12){
				throw Inches12Exp();
			}
		}
		double getFeet() const{
			return feet;
		}
		double getInch() const{
			return inch;
		}
		
};

int main(){
	double f, i;
	cout<<"Enter the value of feet: ";
	cin>>f;
	cout<<"Enter the value of inch: ";
	cin>>i;
	try{
	Distance obj(f,i);
	cout<<"\nFeet is: "<<obj.getFeet()<<endl;
	cout<<"Inch is: "<<obj.getInch()<<endl;
	}
	catch(Distance::Inches0Exp){
    
      cout<<"\nException!!! Invalid Input:\nInches is smaller than 0."<<endl;
	}
	catch(Distance::Inches12Exp){
    
      cout<<"\nException!!! Invalid Input:\nInches is greater than 12."<<endl;
	}
	return 0;
}


