//WAP to make digital clock

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int h,m,s;
	cout.fill('0');
	
	for(h=0;h<24;h++){
		for(m=0;m<60;m++){
			for(s=0;s<60;s++){
				cout<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<endl;
				
				//Do nothing loop
				for(int i=0;i<1000000000;i++){
				}
			}
		}
	}
	return 0;
}
