#include<iostream>
#include<conio.h>
using namespace std;
	
class employee{
	private :
	 
	 char name;
	 int age;
	/*public:
	employee(){ 
	age=0;
	name="NULL";
	}; 
	employee(int a,char n[]):age(a),name(n)
	{ }; 
	 
    */
    public :
	void showdata(){
		cout<<"The empl name is:"<<name<<endl;
		cout<<"The empl age is:"<<age<<endl;
	  }
	};
	
int main()
{
	employee e1;
/*	employee e2(20,"Abdullah");*/
	cout<<"First employee details are:"<<endl;
	e1.showdata();
/*	cout<<"Second employee details are:"<<endl;
	e2.showdata(); */
	
	_getch();
	return 0;
}
	
/*output
First employee details are:
The empl name is:@
The empl age is:0
*/
