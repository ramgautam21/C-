#include<iostream>
using namespace std;

class Base{
	private:
		int x;
		void display1(){
			cout<<"\nPrivate display of BASE Class\n";
		}
    protected:
		int y;
		void display2(){
			cout<<"\nProtected display of BASE Class\n";
		}
		
	public:
		int z;
		void display3(){
			cout<<"\nPublic display of BASE Class\n";		
		}
};

class privateDerived: private Base{
	public: 
	      void showMessage(){
	      	y=10;z=10;
	      	cout<<y<<z;
	      	display2();//private
	        display3();//private
		  }
};

class protectedDerived : protected Base{
	public: 
	      void showMessage(){
	      	y=20;z=20;
	      	cout<<y<<z;
	      	display2();//protected
	        display3();//protected
		  }
};

class publicDerived : public Base{
	public: 
	      void showMessage(){
	      	y=30;z=30;
	      	cout<<y<<z;
	      	display2();//protected
	        display3();//public
		  }
};

int main()
{
	Base b1;
	b1.display3();
	cout<<"........................................................"<<endl;
	
	publicDerived pub1;
	pub1.showMessage();
	pub1.display3();
	cout<<"........................................................"<<endl;
	
	protectedDerived pro1;
	pro1.showMessage();
	cout<<"........................................................"<<endl;

	
	privateDerived pri1;
	pri1.showMessage();
	cout<<"........................................................"<<endl;

	
	
	return 0;
}
