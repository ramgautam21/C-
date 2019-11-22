//WAP to find largest number among 3 numbers.

#include<iostream>
using namespace std;

int largestNumber(int x,int y){
	if(x>=y)
		return x;
	
	return y;	
}
int compareThree(int x, int y, int z){
  return largestNumber(largestNumber(x,y),z);
}

int main(){
	
	int a=7;
	int b=4;
	int c=14;
	
	int largest=largestNumber(a,b);
	int largest2=compareThree(a,b,c);
	
	cout<<"Largest Number is: "<<largest;
	cout<<"\nLargest Number is: "<<largest2;
	
	return 0;
}



