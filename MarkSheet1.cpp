//WAP to store store suudents grade.

#include<iostream>
using namespace std;

char* insertName(int);
int* insertData(int ,int ,char* studentList);

int main(){
	
	int subject,student,studentSize,studentName;
	
	cout<<"Enter total number of subject: ";
	cin>>subject;
	cout<<"Enter total number of students: ";
	cin>>student;

	char studentName[student];

    insertName(studentName);
    
	for(int i = 0; i<2;i++){
		cout<<studentList[i]<<endl;
	}
	//insertData(subject,student,studentList);
	
	return 0;
}



char* insertName(int &studentName){
	
	cout<<"\nEnter student name: "<<endl;
	for(int i=0;i<studentSize;i++){
		
	    cin>>studentName[i];
       	}
    
		return &studentName;
	
}

//
//int *insertData(int subjectSize,int studentSize,string studentList){
//       	
//       	int studentGrade[studentSize][subjectSize];
//       	int student[studentSize];
//       	int subject[subjectSize];
//       	string subjectName[subjectSize];
//       	
//       	
//       	cout<<"\nEnter subject name:"<<endl;
//       	for(int m=0;m<subjectSize;m++){
//       		
//       		cin>>subjectName[m];
//		   }
//       	
//       	for(int i=0;i<studentSize;i++){
//       		
//       		cout<<"Name: "<<studentList[i];
//       		  cout<<"\nEnter subjects Grade\n............................"<<endl; 
//       		     for(int j=0;j<subjectSize;j++){
//       		     	
//       		     	cout<<"Enter grade of "<<subjectName[j]<<": ";
//       		     	cin>>studentGrade[i][j];
//					}
//		   }
//		   return &studentGrade;
//}


