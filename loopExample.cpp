//WAP tp print 123456 for 3 times using for,while,do-while loop.

#include <iostream>
using namespace std;

int main(){
	
	int i=1;
	cout<<"From for loop:"<<endl;
	for (i=1;i<=3;i++){
		cout<<"123456"<<endl;
	}
	
	int j=1;
	cout<<"\nFrom while loop:"<<endl;
	while(j<=3){
		cout<<"123456"<<endl;
		j++;
	}
	
	int k=1;
	cout<<"\nFrom do-while loop:"<<endl;
	do{
	cout<<"123456"<<endl;
	k++;
	}while(k<=3);

}
