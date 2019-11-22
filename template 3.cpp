#include <iostream>
using namespace std;

template <typename T,typename U>
class Weight{
     private:
	    T kg;
	    U grams;
		
	public:
	    void setData(T,U);
	    T getKgData();
	    U getGramsData();
};

template <typename T,typename U>
void Weight<T,U>:: setData(T x,U y){
	  	kg = x;
	  	grams = y;
	  }	
	  
template <typename T,typename U>
T Weight<T,U>:: getKgData(){
	  	return kg;
	  }
	  
template <typename T,typename U>
U Weight<T,U>:: getGramsData(){
	  	return grams;
	  }
	  
int main(){
	Weight<int,double> obj1;
	obj1.setData(5,10.5);
	cout<<"Value of Kg: "<<obj1.getKgData()<<endl;
	cout<<"Value of Grams: "<<obj1.getGramsData()<<endl;
	
	return 0;
} 
