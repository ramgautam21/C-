#include<iostream>
using namespace std;

void takeInput(double* arrayptr,int num){
    
		cout<<"Enter the sales figure for "<<num<<" days"<<endl;
		for(int i=0;i<num;i++){
				cin>>*(arrayptr+i);
		}


}

void calculate(double* arrayptr,int num){

        double total,avg;
		for(int i=0;i<num;i++){
				total+=*(arrayptr+i);
		}
		avg=total/num;
		cout<<"Total sales is: "<<total<<endl;
		cout<<"Averaage sales is: "<<avg;
}

int main(){
        const int num=3;
		double * arrayptr;
		arrayptr=new double[num];
		
		takeInput(arrayptr,num);
		calculate(arrayptr,num);
		return 0;
		delete [] arrayptr;
      }
