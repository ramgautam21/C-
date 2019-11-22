#include<iostream>
using namespace std;

class Test{
	private:
		int num;
	public:
		Test(){
			num = 0;
		}
	void operator++(){
		num=num+1;
	}
	void diaplay(){
		cout<<"The value of num is: "<<num<<endl;
	}
};

int main(){
	
	Test obj;
	obj.diaplay();
	++obj;
	obj.diaplay();
}
