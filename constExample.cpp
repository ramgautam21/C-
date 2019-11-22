#include<iostream>

using namespace std;

class Something{
	
	public:
		int m_value;
		
		Something(){
			m_value = 0;
		}
		
		void resetValue(){
			m_value = 0;
		} 
		
		void setValue(int value){
			m_value = value;
		}
		
		int getValue() const; //note addition of cont keyword here
};

int Something::getValue() const{
    
    return m_value;
}

int main(){
	
	const Something something;//calls default constructor
	
	
//	something.m_value = 5;
	cout<<"Default Cunstructor: "<<something.getValue();
	
//	something.resetValue();
	cout<<"\nReset value: "<<something.getValue();
	
	//something.setValue(7);
	cout<<"\nSet Value: "<<something.getValue();
	return 0;
}
