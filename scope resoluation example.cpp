#include<iostream>
using namespace std;

class Time{
	private:
		int hours;
		int minutes;
		
	public:
		Time();
		Time(int,int);
		int getHours();
		int getMinutes();
		void Display();

Time::Time(){
		hours = 0;
		minutes = 0;
}
Time::Time(int h,int m){
     	hours = h;
		minutes = m;
}
int Time::getHours(){
	return hours;
}
int Time::getMinutes(){
	return minutes;
}
void Time::Display(){
	cout<<"Hours: "<<getHours()<<endl;
	cout<<"MInutes: "<<getMinutes()<<endl;
}

