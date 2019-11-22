#include<iostream>
using namespace std;

class copyConstuctor{
	private:
		int x, y;
		
	public:
		copyConstuctor(int x1, int y1){
			x = x1;
			y = y1;
		}
		copyConstuctor(const copyConstuctor &right){
			x=right.x;
			y=right.y;
		}
		void Display(){
			cout<<"x is: "<< x <<endl<<"y is: "<< y <<endl;
		}
};

int main(){
	
	copyConstuctor obj1(10,15);
	copyConstuctor obj2 = obj1;
	cout<<"Value of x and y when parameterized constructor is called:\n";
	obj1.Display();
	cout<<"Value of x and y when copy constructor used for copying:\n";
	obj2.Display();
	
	return 0;
}
