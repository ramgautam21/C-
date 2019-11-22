#include <iostream>
using namespace std;

class Rectangle{
	
	public:
		void setLength(double);
		void setBreadth(double);
		void setHeight(double);
		double getLength();
		double getBreadth();
		double getHeight();
		Rectangle operator+(Rectangle Rec);
		
	private:
		double length;
		double breadth;
		double height;
};

void Rectangle::setLength(double l){
	length = l;
}
void Rectangle::setBreadth(double b){
	breadth = b;
}
void Rectangle::setHeight(double h){
	height = h;
}

double Rectangle::getLength(){
	return length;
}
double Rectangle::getBreadth(){
	return breadth;
}
double Rectangle::getHeight(){
	return height;
}

Rectangle Rectangle::operator+(Rectangle Rec){
	Rectangle sum;n
	sum.length = this->length + Rec.length;
	sum.breadth = this->breadth + Rec.breadth;
	sum.height = this->height + Rec.height;
	
	return sum;
}

int main(){
	
	Rectangle r1,r2,sum;
	
	r1.setLength(20);
	r1.setBreadth(5);
	r1.setHeight(2);
	
	r2.setLength(2);
	r2.setBreadth(5);
	r2.setHeight(2);
	
	sum = r1 + r2;
	cout<<"Length: "<<sum.getLength()<<endl;
	cout<<"Breadth: "<<sum.getBreadth()<<endl;
	cout<<"Height: "<<sum.getHeight()<<endl;
	
	return 0 ;
}








