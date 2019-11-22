//WAP to show the quotient when two numbers are divided
#include <iostream>
using namespace std;

double division(double x,double y){
	
	if(y==0){
		throw "Exception has occured.";
	}
	return x/y;
}

int main(){
	double result;
	try{
		result = division(100,10);
		cout<<result;
		result = division(100,0);
		cout<<result;
    }
    catch(const char *msg){
        cout<<msg;	
	}
	
	return 0;	
}

