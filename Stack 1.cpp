#include<iostream>
using namespace std;
const int MAX = 100;

class Stack{
	private:
		int newStack[MAX];
		int top;
	public:
		Stack(){
			tip = -1;
		}
		void push(int value){
			newStack[MAX] = value;
		}
		T pop(){
			return newStack[top--];
		}
};

int mai(){
	
}



