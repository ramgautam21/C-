//WAP to find whether a given number is even or odd by using a function returing boolean datatype.

/*   function:
         bool isEven()
*/
#include<iostream>
using namespace std;

bool OddEven(int num){
	
	if(num%2==0)
	    return true;
	return false;
}

int main(){
	
	int num;
	cout<<"Enter an integer number: ";
	cin>>num;
	
	if (OddEven(num)){
		cout<<"\nGiven number is Even."<<endl;
	}
	else
	   cout<<"\nGiven number is Odd."<<endl;
	   
	   return 0;	
}         

