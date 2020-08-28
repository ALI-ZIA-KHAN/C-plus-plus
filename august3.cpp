#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

/*function call using base class pointer*/ 
 /*Late binding/ dynamic binding/ runtime binding occurs*/
class Base{
	
	public:
		virtual void show(){
			
			cout<<"base class"<<endl;
		}
};
class Derived:public Base{
	public:
		virtual void show(){
			
			cout<<"Derived class"<<endl;
		}
};
int main(){
	
	Base* b;// base class pointer
	Derived d;// derived class object
	
	b=&d;// derived class obj's addr given to  base class pointer
	b->show();//Late binding
}

/*
Output
Derived class

*/

/* using virtual keyword will lead us to late binding and correct version will always be called*/











