//Relational Operator overloading(< > <= >= ==) 

#include<iostream>
using namespace std;

class Distance{
	private:
		double inch;
		double feet;
	public:
		//default constructor
//		Distance(){
//		   inch = 0;
//		   feet = 0;
//		   cout<<"\nFrom Default Constructor:"<<endl<<"inch:"<<inch<<endl<<"feet:"<<feet<<endl;
//		}
		
		//parameterized constructor
		Distance(double i,double f){
			inch = i;
			feet = f;
		}
//		void Display(){
//			cout<<"\nFrom display Function:"<<endl;
//		    cout<<"inch:"<<inch<<endl;
//		    cout<<"feet:"<<feet<<endl;
//		}
		bool operator < (Distance dis){
			if (feet < dis.feet){
				return true;
			}
			if(inch < dis.inch){
				return true;
			}	
		return false;
		}
};



int main(){
	double inch,feet;
	cout<<"Enter inch:";
	cin>>inch;
	cout<<"Enter feet:";
	cin>>feet;
	
    Distance d1(4,5), d2(inch,feet);
	if(d1<d2){
		cout<<"D2 is greater."<<endl;
	}
	
	return 0;
	
}









