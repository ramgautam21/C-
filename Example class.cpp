#include<iostream>
using namespace std;

//class Square{
//	private:
//		int side;
//	public:
//		//Accesser
//		void setSide(int s){
//			side = s;
//		}
//		
//		//Mutator
//		double getSide(){
//	       	return side;
//		}
//		double Area(){
//			return side*side;
//		}
//};

class Square{
	private:
		double side;
	public:
		double getSide();
		void setSide(double);
		double Area();		
};
void Square::setSide(double s){
	side = s;
}
double Square::getSide(){
	return side;
}
double Square::Area(){
	return side*side;
}
	
	
int main(){
	
	double side;
	label:
	cout<<"Enter integer: ";
	cin>>side;
	if(side<0){
		cout<<"\n!!!Please enter positive number!!!\n"<<endl;
		goto label;
	}
	Square s;
	s.setSide(side);
	cout<<"\nYou Entered side: "<<s.getSide()<<endl;
	cout<<"Square is: "<<s.Area();
	
	return 0;
}

