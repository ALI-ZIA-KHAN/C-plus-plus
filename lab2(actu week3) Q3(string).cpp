#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Student{
	
	 string firstname;
	 string lastname;
	 float score;
	
};

int main(){
	
	
	Student s1;
	cout<<"Enter your firstname"<<endl;
	cin>>s1.firstname;
	cout<<"Enter your lastname"<<endl;
	cin>>s1.lastname;
	cout<<"Enter your score"<<endl;
	cin>>s1.score;
	
	cout<<"The details are"<<endl;
	cout<<"The first name is\t"<<s1.firstname<<endl;
	cout<<"The last name is\t"<<s1.lastname<<endl;
	cout<<"The score is\t"<<s1.score<<endl;
	
	
	return 0;
	
}




/*output
Enter your firstname
Bill
Enter your lastname
Gates
Enter your score
90.5
The details are
The first name is       Bill
The last name is        Gates
The score is    90.5
*/


