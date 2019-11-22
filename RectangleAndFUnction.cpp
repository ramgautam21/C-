//WAP to calculate as 
//1.A class name rectangle and its length and breadth are respective member variable.
//2.Member function calculate
//3.initialize member variable with constructor.
#include<iostream>
using namespace std;

class Rectangle{
	
	private:
	float length;
	float breadth;
	
	//public:
	/*Rectangle(float a, float b){
		
		length = a;
		breadth = b;
	}*/
	public:
		float setLength(float a){
			length = a;
		}
		float setBreadth(float b){
			breadth = b;
		}	
		float getLength(){
			return length;
		}
		float getBreadth(){
			return breadth;
		}
		
		
	float calculate(){
		
		return (length * breadth);
		
	}
	
};
int main(){
	
	float length,breadth;
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter breadth: ";
	cin>>breadth;
	
	Rectangle r1 ; 
	r1.setLength(length);
	r1.setBreadth(breadth);
	float result = r1.calculate();
	
	cout<<"\nResult is: "<<result<<endl;
	cout<<"Your length is: "<<r1.getLength()<<endl;
	cout<<"Your breadth is: "<<r1.getBreadth();
	return 0;
}
