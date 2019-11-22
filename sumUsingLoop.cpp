//Wap to find the sum of squarees of natural numbers less than the user input.

#include<iostream>
using namespace std;

int main(){

    int num;
	int sum=0; 	
	cout<<"Enter the total nubmber you want to sum: ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		sum+=(i*i);
	}
	cout<<"\nYour sum is: "<<sum<<endl;
	return 0;
}

 
