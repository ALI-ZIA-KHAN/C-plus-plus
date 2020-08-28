#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

/*function call binding with class objects*/ 
/*Early binding/ static binding / compile-time binding*/ 
class Base{
	
	public:
		void show(){
			
			cout<<"base class"<<endl;
		}
};
class Derived:public Base{
	public:
		void show(){
			
			cout<<"Derived class"<<endl;
		}
};
int main(){
	
	Base b;//  base class object
	Derived d;// derived class object
	
  b.show();
  d.show();   //Early binding
}

/*output
base class
Derived class
*/
