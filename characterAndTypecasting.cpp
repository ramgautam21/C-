//Wap to learn about charactors and typecasting

#include<iostream>
using namespace std;

int main(){
	char a='z';
	char b=65;
	
	cout<<a<<'a'<<'z'<<endl;
	cout<< "The charactor ("<<'a'<<") has the value "<< static_cast< int > ('a') <<endl;
	
	return 0;
}
