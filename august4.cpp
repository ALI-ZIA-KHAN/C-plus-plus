#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
/*PURE VIRTUAL FUNCTION PROGRAM*/
/*function call using base class pointer*/ 
 /*Late binding/ dynamic binding/ runtime binding occurs*/
class Base{
	
	public:
		virtual void show()=0;  // PURE VIRTUAL FUNCTION: SYNTAX (virtual void func()=0//
};
class Derived:public Base{
	public:
		 void show(){
			
			cout<<"Implementation of virtual func. in derived class"<<endl;
		}
};
int main(){
	//Base obj;   object cannot be created of a abstract class
 	Base* b;// base class pointer
	Derived d;// derived class object
	
	b=&d;// derived class obj's addr given to  base class pointer
	b->show();//Late binding
}
/*output
Implementation of virtual func. in derived class
*/

