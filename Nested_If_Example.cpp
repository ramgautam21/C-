//WAP to print grades of student according to using nested if and if else.

#include<iostream>
using namespace std;

int main(){
	
	float marks;
	cout<<"Enter student average marks: ";
	cin>>marks;
	cout<<"\n";
	
	if(marks>=90){
		cout<<"Grade A.";
	}
	else
	    if(marks>=80){
	    	cout<<"Grade B.";
		}
		else
		    if(marks>=70){
		    	cout<<"Grade C.";
			}
			else
			    if(marks>=60){
		    	cout<<"Grade D .";
			    }
			    else
			        if(marks>=50){
		         	cout<<"Grade E.";
			        }
			        else
			            if(marks<50){
			            	cout<<"Grade F or Fail.";
						}
	
	return 0;
			            
}
