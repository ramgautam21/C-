#include<iostream>
using namespace std;

class construct{
	
	private:
        int a, b;
	
	public:
		construct(){}
		construct(int a2, int b2){
			a=a2;
			b=b2;
		}
	
	int getA2(){
		return a;
	}
	int getB2(){
		return b;
	}
	void setA(int a1){
		a= a1;
	}
	void setB(int b1){
		b = b1;
	}
	int	getA(){
			
			return a;
		}
	int	getB(){
			
			return b;
		}
};

int main(){
	
	construct c;
	construct d(13,21);
	c.setA(4);
	c.setB(7);
	cout<<"a2: "<<d.getA2()<<endl<<"b2: "<<d.getB2()<<endl;
	cout<<"a: "<<c.getA()<<endl<<"b: "<<c.getB()<<endl;
	
	return 1;
}

