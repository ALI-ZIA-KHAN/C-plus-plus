#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Student{
	public:
		char *name;
		int rollno;
	public:
	Student(){
	};
	Student(char n[]){
	name=n;
	}
	void setrollno(int ano){
	 rollno=ano;
	}	
	
};

int main(){
	Student *ptr;
	 ptr=new Student;  // using new operator to create obj just at thre runtime and giving to pointer
	ptr->setrollno(10);
}
/*
but how to see the output to ask
*/
