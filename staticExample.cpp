//WAP to learn äbout static member variable
/* Create a class Tree
       declare a static member variable in private and define the variable outside the class.
       
       ->Whenever an object is created a default constructor is invoked.The 
       constructor will count the number of objects created using count variable.
       
       Create multiple objects, and write an accessor getCount() to return the value of count
*/
    
#include<iostream>
using namespace std;

class Tree{
	public:
		Tree();
		int getCount();
	private:
		static int count;
};

int Tree::count = 0;

Tree::Tree(){
	count++;
}

Tree::getCount(){
	return count;
}

int main(){
	
	Tree mango;//count=1, count=2, count=3
    Tree apple;//count=2, count=3
	Tree banana;//count=3

	cout<<"Total Object: "<<banana.getCount()<<endl;
	return 0;
	
}

