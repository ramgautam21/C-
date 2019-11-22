//create a class tringle with three sides side1, side2, side3 as private member varibale.
/*Create function using getter/setter of its side such that function can 
able to get/set its private number variable*/
//Compute binary (*) operator overloading.

#include<iostream>
using namespace std;

class Triangle{
   private:
   	double side1;
   	double side2;
   	double side3;
   	
   public:
   	void setSide1(double);
   	void setSide2(double);
   	void setSide3(double);
   	double getSide1();
   	double getSide2();
   	double getSide3();
   	double side1Area();
   	double side2Area();
   	double side3Area();
    Triangle operator *(Triangle Tri);
};

void Triangle::setSide1(double s1){
	side1 = s1;
}
void Triangle::setSide2(double s2){
	side2 = s2;
}
void Triangle::setSide3(double s3){
	side3 = s3;
}
double Triangle::getSide1(){
	return side1;
}
double Triangle::getSide2(){
	return side2;
}
double Triangle::getSide3(){
	return side3;
}

Triangle Triangle::operator *(Triangle Tri){
	
	Triangle mul;
	
	mul.side1 = this->side1 * Tri.side1; 
	mul.side2 = this->side2 * Tri.side2;
	mul.side3 = this->side3 * Tri.side3;
	return mul;
}
double Triangle::side1Area(){
	double area1 = getSide1()*getSide2()*getSide3();
	return area1;
}
double Triangle::side2Area(){
	double area2 = getSide1()*getSide2()*getSide3();
	return area2;
}
double Triangle::side3Area(){
	double area3 = getSide1()*getSide2()*getSide3();
	return area3;
}

int main(){
	
	Triangle t1,t2,mul;
	
	t1.setSide1(2);
	t1.setSide2(5);
	t1.setSide3(10);
	
	t2.setSide1(2);
	t2.setSide2(10);
	t2.setSide3(5);
	
	mul = t1 * t2;
	
	cout<<"Side1= "<<mul.getSide1()<<endl;
	cout<<"Side2= "<<mul.getSide2()<<endl;
	cout<<"Side3= "<<mul.getSide3()<<endl;
	cout<<endl;
	
	cout<<"Area1= "<<t1.side1Area()<<endl;
    cout<<"Area2= "<<t2.side2Area()<<endl;
    cout<<"Area3= "<<mul.side3Area()<<endl;
    
	
	return 0;
}











