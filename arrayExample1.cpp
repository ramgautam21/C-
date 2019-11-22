//WAP a program to input 5 numbers in array and show them. Find the highest and lowest of them.
//Note:Array allows you to store and work with multiple values  of same datatypes.
#include<iostream>
using namespace std;

void display(int array[]){
	
	cout<<"You have Entered: ";
	for(int i=0;i<5;i++){
		cout<<array[i]<<" ";
	}
}
int highestNumber(int array[]){
	
	int max = array[0];
	for(int i=0;i<5;i++){
		
		if(max <= array[i]){
			max = array[i];
		}	
	}
	
	return max;	
}

int lowestNumber(int array[]){
	
	int min = array[0];
	for(int i=0;i<5;i++){
		
		if(min >= array[i]){
			min = array[i];
		}	
	}	
	return min;
}


int main(){
//	
//	int s;
//	cout<<"Enter the size of array: ";
//	cin>>s;
	cout<<"Enter integer number:"<<endl;
	int array[5];
	for(int i=0;i<5;i++){
	   
	   cin>>array[i];
	}
	display(array);
	cout<<"\n\nLowest number is: "<<lowestNumber(array)<<endl;
	cout<<"Highest number is: "<<highestNumber(array)<<endl;
	
	return 0;
}
