#include<iostream>
#include<conio.h>
using namespace std;

void display(float total_charge,float discount){
	cout<<"Discount price: "<<discount<<endl;
	cout<<"Price after Discount: "<<total_charge<<endl;
}

int calculation(int netPrice,float discountRate){

    float discount,total_charge;	
	int net_price=netPrice;
	float discount_Rate=discountRate;
	discount=net_price*discount_Rate;
	total_charge=net_price-discount;	
	display(total_charge,discount);
	return 0;
}

int main(){
	
	int i,j,cid=12345,date,day[3],uprice[3],net_price[2]={0,0},discount[2];
	
	cout<<"Please Enter 3 days stock info:"<<endl;
	cout<<"............................"<<endl;
	cout<<"............................"<<endl;
	
	for(i=0;i<2;i++){

		cout<<"Customer id =>"<<cid<<endl;
		cout<<"Date => ";
		cin>>date;
		
		for (j=0;j<3;j++){
			
			cout<<"\nDay["<<j+1<<"] = ";
			cin>>day[j];
			cout<<"Unit Price["<<j+1<<"] = ";
			cin>>uprice[j];
			
			net_price[i]=net_price[i]+(day[j]*uprice[j]);
				
			cout<<"\nDay "<<j+1<<" charges = "<<net_price[i]<<endl;
		}
		if(net_price[i]>600){
		    calculation(net_price[i],0.25);
		}
		else if(net_price[i]<600 && net_price[i]>400){
		    calculation(net_price[i],0.15);
		}
		else if(net_price[i]<=400 && net_price[i]>200){
		    calculation(net_price[i],0.10);
		}
		else{
			 calculation(net_price[i],1);
		}
		cout<<"......................................"<<endl;	
		cid++;	
		}
	return 0;
}
	

