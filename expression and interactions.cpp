#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	char ch,value;
	int total;
	total=(6-3)*(2+7)/3;//precendence and associativity
	cout<<"The total is: "<<total<<endl;
	cin.get(ch);
		int a=5,b=12;
		double x=3.4,z=9.1;

		//cout<<set(5);
		cout<<b/a<<endl<<x*a<<endl<<a*x<<endl
		<<static_cast<double>(b/a)<<endl
		<<static_cast<double>(b)/a<<endl
		<<b/static_cast<double>(a)<<endl
		<<static_cast<double>(b)/static_cast<double>(a)<<endl
		<<b/static_cast<int>(x)<<endl
		<<static_cast<int>(x)*static_cast<int>(z)<<endl
		<<static_cast<int>(x*z)<<endl
		<<static_cast<double>(static_cast<int>(x)*static_cast<int>(z))<<endl;
		
		ch=cin.get();
		cout<<"Are you sure you want to go to next section? \n"<<"Type Y or N \n";
		cin>>value;
		//cin.ignore();
		cout<<"\n Press Enter and you are ready to go ";
		ch=cin.get();
		
		string name,city;
		bool result;
		name="Mikasa ";
		city="from Kathmandu \n";
		cout<<name+city<<endl; //concatenation
		cout<<"\n Length of name is: "<<name.length()<<endl;
		result=name>city;
		cout<<result<<endl;
		result=name!=city;
		cout<<result<<endl;
		result=name<city;
		cout<<result<<endl;
		
		cout<<"Enter your name: ";
		cin>>name;
		//getline(cin,name);
		cout<<name;
		return 0;
}
