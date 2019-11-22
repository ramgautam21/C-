#include<iostream>
#include<conio.h>
#define pi 3.1459
using namespace std;

int main(){
	
	int radius,Perimeter,Area;
	cout<<"Enter radius of circle: ";
	cin>>radius;
	
	Perimeter = 2*pi*radius;
	Area = pi*radius*radius;
	
	cout<<"Perimiter = "<<Perimeter<<endl;
	cout<<"Area = "<<Area<<endl;
	
	return 0;
}
