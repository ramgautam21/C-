//(ac -bd)+ i(ad +bc)
#include<iostream>
using namespace std;

class A{
	private:
		int real, imag;
		
	public: 
	   A(int a = 0, int b = 0){
	   	real = a;
	   	imag = b;
	   }
	   A operator *(const A obj){
	   	A temp;
	   	temp.real = real * obj.real;
	   	temp.imag = imag * obj.imag;
	   	return temp;
	   }
	   void display(){
	   	cout<<"The Multiplication of two number is:"<<endl<<real<<" and "<<imag<<endl;
	   }
};
int main(){
	 
	 A obj1(2,3),obj2(4,5);
	 A obj3 = obj1 * obj2;
	 obj3.display();
	 
	return 0; 
}
