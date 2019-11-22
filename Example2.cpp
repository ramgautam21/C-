//WAP to learn about Private member functions.
/*Tasks:
  Create class Square
  Create a private member function named : initSquare()
  Whenever an object created in main function call
       a parameterized Constructor is called.This Constructor
       will then call the initSquare function to initialize the side of the Square
  ->Finally, write anaccessor to get the area of square. */
 //qt, dev  
  #include<iostream>
  using namespace std;
  
  class Square{
  	public:
  		Square(double s){
  			initSquare(s);
		  }
		
	double getArea(){
		return square*square;
	}
  	
  	private:
	  void initSquare(double s){
	  	 square =s;
	  }
	  double square;
  };
  
  int main(){
  	double square;
  	cout<<"Enter side of a square:";
  	cin>>square;
  	Square s(square);
  	cout<<"\nArea is: "<<s.getArea()<<endl;
  	return 0;
  }
