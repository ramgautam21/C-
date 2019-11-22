#include <iostream>
using namespace std;

template <typename T, typename U>
class Weight{
	private:
		T kg;
		U gram;
		
	public:
		void setData(T a, U b){
			kg=a;
			gram=b;
		}
		
		T getDataKg(){
			return kg;
		}
		U getDataGram(){
			return gram;
		}
};


int main(){
	
	Weight<int,double> obj1;
	obj1.setData(5,7.7);
	cout<<"Kg = "<<obj1.getDataKg()<<endl;
	cout<<"Gram = "<<obj1.getDataGram()<<endl;
	
	return 0;
	
	
}
