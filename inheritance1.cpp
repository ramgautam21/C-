#include<iostream>
//#include<string>
using namespace std;

class Person{
	public:
		string profession;
		int age;
		Person(){
			profession="unemployed";
			age=16;
		}
		void display(){
			cout<<"\nMy profession is: "<<profession<<endl;
			cout<<"My age is: "<<age<<endl;
			walk();
			talk();
		}
		void walk(){
			cout<<"I can walk.\n";
		}
		void talk(){
			cout<<"I can talk.\n";
		}
	
};

class Teacher : public Person{
	public:
		void teachAP(){
			cout<<"I can teach AP.\n";
		}
};

class Footballer : public Person{
	public:
		void playFootball(){
			cout<<"I can play football.\n";
		}
};

int main(){
	Person p1;
	p1.display();
	
	Teacher t1;
	t1.profession="Teacher";
	t1.age = 50;
	t1.display();
	t1.teachAP();
	
	Footballer f1;
	f1.profession="Footballer";
	f1.age=21;
	f1.display();
	f1.playFootball();
	
	
	return 0;
}
