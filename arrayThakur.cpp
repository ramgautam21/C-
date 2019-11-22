#include<iostream>

using namespace std;

int main()
{
	
	int array[5];
	cout<<"Enter five no:"<<endl;
	
	for(int i=0;i<5;i++)
	{
		cin>>array[i];
	}
	Display();
	
	return 0;
}
void Display()
{
    
	for(int j=0;j<5;j++)
	{
		cout<<"You have entered: "<<array[j]<<" ";
		
	}	
	
	
	
}






