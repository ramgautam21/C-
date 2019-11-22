#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		double length;
		double breadth;
		
	public:
		Rectangle operator + (Rectangle Rect);
		Rectangle(double, double);
		void displayArea();

};

Rectangle Rectangle::operator +(Rectangle Rect){
	Rectangle R3;
	
    R3.length = this->length  + Rect.length;
	R3.breadth = this->breadth + Rect.breadth;
	
	return R3;
	
}

Rectangle::Rectangle(double l, double b){
		
	length = l;
	breadth = b;
}

void Rectangle::displayArea(){
	
	cout<<"\nArea is: "<<(length*breadth);
}



int main(){
	
	double length, breadth;
	cout<<"Enter length: ";//5 r1
	cin>>length;
	cout<<"Enter breadth: ";//7
	cin>>breadth;
	
	Rectangle r1(length,breadth),r2(2,3);
	
	R3 = r1+r2;
	cout<<R3;
	r.displayArea();
	
	return 0;
}








