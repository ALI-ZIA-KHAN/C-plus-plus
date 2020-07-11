#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	
class employee{
	private :
	int age;
	char *name;
	
	public:
	employee()
	{ 
	age=0;
	name="NULL";
	}; 
	employee(int a,char n[]):age(a),name(n)
	{ }; 
	int getage()
	{
		return age;
	} 
    void setage(int a)
	{
	age=a;
	}
	/*datatype k sath lgega * v. imp*/
	char* getname()
	{
		return name;
	} 
    void setname(char n[])
	{
	name=n;
	}
	
	
    public :
	void showdata(){
		cout<<"The empl name is:"<<name<<endl;
		cout<<"The empl age is:"<<age<<endl;
	  }
	};
	
int main()
{
	employee e1;
     employee e2(20,"Abdullah");
	cout<<"First employee details are:"<<endl;
	e1.showdata();
	cout<<"Second employee details are:"<<endl;
	e2.showdata();
	e1.setage(30);
	e1.setname("Ali");
	cout<<"New age for e1 is:"<<e1.getage()<<endl<<"e1's new name"<<e1.getname()<<endl;
	e2.setage(50);
	e2.setname("Arham");
	cout<<"New age for e2 is:"<<e2.getage()<<endl<<"e2's new name"<<e2.getname()<<endl;
	
	 
	
	_getch();
	return 0;
}
/*output
First employee details are:
The empl name is:NULL
The empl age is:0
Second employee details are:
The empl name is:Abdullah
The empl age is:20
New age for e1 is:30
e1's new nameAli
New age for e2 is:50
e2's new nameArham
*/
