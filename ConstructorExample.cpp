
#include<iostream>
using namespace std;

class Something{
	public:
		int m_value;
		
		Something(): m_value(0){
		cout<<m_value;
		}
		
		void setValue(int value){
			m_value = value;
		}
		int getValue(){
			return m_value;
		}
};

int main(){
	
    /*const */	Something something;//calls default constructor
	
	
	something.m_value = 5;//compiler erroe: violates const
	cout<<something.getValue();
	something.setValue(7);//compiler erroe: violates const
	cout<<something.getValue();
	return 0;
}
