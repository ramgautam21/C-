#include<iostream>
#include<fstream>
#include<ctime>
#include<conio.h>
using namespace std;

void display(int total_charge[],int discount[],int cid[],int net_price[]){
	int i;
	ofstream fout; 
	time_t now = time(0);
	char* dt = ctime(&now);
	fout.open("sample.txt",ios::app|ios::out);
	
	cout<<"!!! Bhatbhateni Software !!!"<<endl;
	cout<<"............................\n"<<endl;
	
	
	fout<<"!!! Bhatbhateni Software !!!"<<endl;
	fout<<"............................"<<endl;
	
	for(i=0;i<2;i++){
		//consle
		cout<<dt;
		cout<<"........................"<<endl;
		cout<<"For Customer Id:"<<cid[i]<<endl;
		cout<<"Net Amount: "<<net_price[i]<<endl;
		cout<<"Discount price: "<<discount[i]<<endl;
	cout<<"Total Amount: "<<total_charge[i]<<endl;
	cout<<"..........................\n\n"<<endl;
	//file
       	fout<<dt;
       	fout<<"........................"<<endl;
		fout<<"For Customer Id:"<<cid[i]<<endl;
		fout<<"Net Amount: "<<net_price[i]<<endl;
		fout<<"Discount price: "<<discount[i]<<endl;
	fout<<"Total Amount: "<<total_charge[i]<<endl;
	fout<<"..........................\n"<<endl;
   }
   fout.close();
}

int calculation(int net_price[],int cid[]){

    int discount[2];	
	int total_charge[2];

	for(int i=0;i<2;i++){

		if(net_price[i]>600){
		
		discount[i]=net_price[i]*0.25;
		total_charge[i]=net_price[i]-discount[i];
		}
		else if(net_price[i]<600 && net_price[i]>400){
			discount[i]=net_price[i]*0.15;
			total_charge[i]=net_price[i]-discount[i];
		
		}
		else if(net_price[i]<=400 && net_price[i]>200){
			discount[i]=net_price[i]*0.10;
			total_charge[i]=net_price[i]-discount[i];
		
		}
		else{
			total_charge[i]=net_price[i];	
		}
	}		
	display(total_charge,discount,cid,net_price);
	return 0;
}

int main(){
	
	int i,j,cid[2],date,day[3],uprice[3],net_price[2]={0,0},discount[2];
	
	cout<<"Please Enter 3 days stock info:"<<endl;
	cout<<"............................"<<endl;
	cout<<"............................\n";
	
	for(i=0;i<2;i++){
        cid[i]=12345+i;
		cout<<"Customer id =>"<<cid[i]<<endl;
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
		
		cout<<"......................................"<<endl;
		cout<<"......................................\n";	
	
		}
		calculation(net_price,cid);
	return 0;
}
	

