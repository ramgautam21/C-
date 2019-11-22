#include <iostream>
using namespace std;

template <typename T>
class Weight{
     private:
	    T kg;
		
	public:
	    void setData(T);
	    T getData();
};

template <typename T>
void Weight<T>:: setData(T x){
	  	kg = x;
	  }	
	  
template <typename T>
T Weight<T>:: getData(){
	  	return kg;
	  }
	  
int main(){
	Weight<int> obj1;
	Weight<double> obj2;
	obj1.setData(5);
	obj2.setData(5.55);
	cout<<"Value of obj1: "<<obj1.getData()<<endl;
	cout<<"Value of obj2: "<<obj2.getData()<<endl;
} 
