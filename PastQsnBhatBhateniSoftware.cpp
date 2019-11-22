#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int i,j,cid=12345,date,day[3],uprice[3],net_price[2]={0,0},discount[2],total_charge[2];
	
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
		cout<<"\nTotal charges = "<<net_price[i]<<endl;
		if(net_price[i]>600){
		
		discount[i]=net_price[i]*0.25;
		total_charge[i]=net_price[i]-discount[i];
		cout<<"Discounted price= "<<discount[i]<<endl;
		cout<<"Price after discount= "<<total_charge[i]<<endl;	
		}
		else if(net_price[i]<600 && net_price[i]>400){
			discount[i]=net_price[i]*0.15;
			total_charge[i]=net_price[i]-discount[i];
			cout<<"Discounted price= "<<discount[i]<<endl;
		cout<<"Price after discount= "<<total_charge[i]<<endl;	
		}
		else if(net_price[i]<=400 && net_price[i]>200){
			discount[i]=net_price[i]*0.10;
			total_charge[i]=net_price[i]-discount[i];
			cout<<"Discounted price= "<<discount[i]<<endl;
		cout<<"Price after discount= "<<total_charge[i]<<endl;	
		}
		else{
			cout<<"Discounted price= No Discount."<<endl;
		cout<<"Price after discount= "<<net_price[i]<<endl;		
		}
		cout<<"......................................"<<endl;	
		cid++;	
		}
		
		return 0;		
}
 
