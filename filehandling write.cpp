#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream fout;
	fout.open("sample.txt",ios::app|ios::out);
	fout<<"I am Ram Gautam"<<endl;
	fout<<"I stuied in Sunway College."<<endl;
	
	fout.close();
	
	cout<<"done";
	
	return 0;
	
}
