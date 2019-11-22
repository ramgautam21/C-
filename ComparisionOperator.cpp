//WAP to input two number and show the relationship between them: Equality and relation

#include<iostream>
using namespace std;

int main(){
	
	int a=5, b=10;
	
	if(a<b){
		cout<<a<<" is less than "<<b<<endl;
	}
    if(a>b){
		cout<<a<<" is greater than "<<b<<endl;
	}  	
	if(a<=b){
		cout<<a<<" is  equal or less than "<<b<<endl;
	}
	if(a>=b){
		cout<<a<<" is  equal or gerater than "<<b<<endl;
	}
	if(a==b){
		cout<<a<<" is  equal to  "<<b<<endl;
	}
	if(a!=b){
		cout<<a<<" is not equal to "<<b<<endl;
	}
	return 0;
}
