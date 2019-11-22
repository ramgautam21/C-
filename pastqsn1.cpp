#include<iostream>

using namespace std;

class square{
	
	private:
		double length;
		double width;
	
		
	public:
		square(int l, int w){
			length = l;
			width = w;
		}
	double calculation(){
		return length*width;
	}
	void display(double result){
		cout<<"\nArea is: "<<result<<endl;
	}	
};

int main(){
	
	label:
	double length, width;
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter width: ";
	cin>>width;
	
	if(length<2 || width <2){
		cout<<"Please enter greater then 2.\n"<<endl;
		goto label;
	}
	square s(length,width);
	
	
	double result = s.calculation();
	s.display(result);
	
	return 0;
}




