//WAP to calculate the palindrome number of the given input range(high & low or low and high).

#include<iostream>
using namespace std;
int main(){
	int num,temp,temp2,digit,rev,low,high,count;
	
	cout<<"Enter the lowest range: "<<endl;
	cin>>low;
	cout<<"Enter the highest range: "<<endl;
	cin>>high;
	
	if(low>high){
		low=low+high;
		high=low-high;
		low=low-high;
	}
	for(int i=low;i<=high;i++){
		temp=i;
		rev=0;
		do{
			digit = temp % 10;
			rev = ( rev * 10 ) + digit;
			temp = temp / 10;
		}while( temp !=0 );
		
		temp2 =i;
		
		if(rev==i){
			count = 0;
			for(int j=1;j<=temp2;j++){
				if(temp2%j==0)
				count++;
			}
			if(count == 0)
			    cout<<temp2<<"\t";
		}
	}
	return 0;
}
