/*pointers to objects*/
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
	Student obj;
	Student *ptr;
	ptr=&obj;
	ptr->setrollno(10);
	
	cout<<obj.rollno<<endl;
}

/*output
10
*/
