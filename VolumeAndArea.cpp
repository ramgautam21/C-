//WAP to find the area and volume of sphare using function.
/* functions:
           float inputRadius()
           void calcArea()
           void calcVolume()
           
           SA = 4*PI*r*r;
           V = 4/3 * PI * r*r*r Or V = 4/3 * PI * pow(r,3)
	*/
#include<iostream>
#include<iomanip>
#define PI 3.1415
using namespace std;

float inputRadius(){
	
	double r;
	cout<<"Enter radius: ";
	cin>>r;
	return r;
}
void calcArea(float r){
	float SA;
	SA = 4*PI*r*r;
	cout<<"\nSurface Area is: "<<setprecision(2)<<fixed<<SA<<endl;
}

void calcVolume(float r){
	float V;
	V = (4/3.0) * PI * r*r*r;
	cout<<"\nVolume is: "<<setprecision(2)<<fixed<<V<<endl;
}

int main(){
	
	float r=inputRadius();
	calcArea(r);
	calcVolume(r);
	
	return 0;	
}  

