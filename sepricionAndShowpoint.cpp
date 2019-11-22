#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	double x=450.56, y=444.00;
	
	cout<<setprecision(5)<<showpoint<<x<<endl;
	//By using showpoint we can show zero after point(.)
	cout<<y<<endl;
	
	return 0;
}
