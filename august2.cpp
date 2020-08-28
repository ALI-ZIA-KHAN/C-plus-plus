#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

/*function call using base class pointer*/  /*Early binding occurs*/
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
	
	Base* b;// base class pointer
	Derived d;// derived class object
	
	b=&d;// derived class obj's addr given to  base class pointer
	b->show();//Early binding
}

/*output
base class
 */
 
/*IN ABOVE EX; ALTHOUGH OBJ IS  OF DER CLASS, BUT METHOD OF BASE CLASS IS CALLED.
THIS HAPPENS DUE TO EARLY BINDING.

COMPILER ON SEEING BASE CLASS'S SHOW () FUNCTION,WITHOUT KNOWING ACTUAL OBJ TYPE
WILL EXECUTE DIRECTLY BASE CLASS'S METHOD.  
 
 
 
 
 
 
 
 
 
