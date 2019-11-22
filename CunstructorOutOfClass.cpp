#include<iostream>

using namespace std;

class Line{
	
	public:
		double length;
		void setLength (double len);
		double getLength();	
		Line();	
};

Line::Line(){
	
	length = 0;	
	cout<<length;	
	}

void Line::setLength(double len){
	length = len;
} 

double Line::getLength(){
	return length;
}

int main(){
	
	Line line;
	line.length=50;
	//line.setLength(7);
	cout<<"\n"<<line.getLength();
	return 0;
}
