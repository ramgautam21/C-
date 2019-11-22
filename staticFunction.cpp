#include<iostream>
using namespace std;

class Box{
	private:
		double length;
		double breadth;
		double height;
	public:
		static int objectCount;//static member variable
	//Constructor defination
	Box(double l, double b, double h){
		cout<<"\nParameterize Constructor called."<<endl;
		length = l;
		breadth = b;
		height = h;
		cout<<length<<"   "<<breadth<<"   "<<height<<endl;
		//Increase every time object is created
		objectCount++;
		cout<<"Objct Count:"<<objectCount<<endl;
	}
	double Volume(){
		return length*breadth*height;
	}
	static int getCount(){//ststic member function
	
		return objectCount;
	}
};//end of class

//Initilize static mamber of class box
int Box::objectCount = 0;

int main(){
	
	double l,b,h;
	cout<<"Enter Length: ";
	cin>>l;
	
	cout<<"Enter Breadth: ";
	cin>>b;
	
	cout<<"Enter Height: ";
	cin>>h;
	//print total number of objects before creating object.
	cout<<"\nInitial Stage Count: "<<Box::getCount()<<endl;
	
	Box Box1(l,b,h);//Declare box1
	cout<<"Box1 Volume is: "<<Box1.Volume()<<endl;
	
	Box Box2(8.5,6.0,2.0);//Declare box2	
	cout<<"Box2 Volume is: "<<Box2.Volume()<<endl;
	
	if(Box1.Volume()>Box2.Volume()){
		cout<<"\nBox1 Volume is Greater."<<endl;
	}
	else{
		cout<<"\nBox2 Volume is Greater."<<endl;
	}
	
	//print total number of objects after creating object.
	cout<<"\nFinal Stage Count: "<<Box::getCount()<<endl;
	
	return 0;
}

