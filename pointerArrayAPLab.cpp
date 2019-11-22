#include <iostream>
using namespace std;

//int main(){
//	
//	char A[8] = "ABCDE";
//	char *ptr = A;
//	++ptr;
//	cout << ptr <<endl;
//	cout << *ptr <<endl;
//	
//	ptr += 2;
//	cout << ptr << endl;
//	--ptr;
//	cout<< ptr <<endl;
//	
//	return 0;
//}

/*int main(){
	
	char a[8] = "PRoGRAM";
	
	char *ptr = a;
	ptr = ptr+1;
	cout<< ptr <<endl;
	cout<< ptr + 4 <<endl;
	cout<< --ptr <<endl;
	cout<< ptr <<endl;
	
	return 0;
}*/

int main(){
	char * const A = "EXAMINATION";
	int i = 3;
	char *p = A+i;
	cout << p <<endl;
	p += 2;
	cout<< p <<endl;
	--p;
	cout<< p <<endl;
	
	return 0; 
}
