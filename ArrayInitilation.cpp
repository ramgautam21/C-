#include<iostream>

using namespace std;

int main(){
	
	//const int SIZE = 5;
	
	int array[] = {1,2,3,4,5}; 
	array[5] = 60;
	
	for(int i=0; i<6; i++){
		
		cout<<array[i]<<endl;
	}
	return 0;
}

