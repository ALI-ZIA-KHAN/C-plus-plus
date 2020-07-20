#include <iostream>
#include <conio.h>
using namespace std;

class student
{
	int roll;
	int marks;
public:student(int m, int n)
{
	roll = m;
	marks = n;
}
	  student(student& t)
	  {
		  roll = t.roll;
		  marks = t.marks;
	  }
	  void showdata()
	  {
		  cout << "roll no" << roll<<endl;
		  cout << "marks" << marks<<endl;

	  }
};
/* agr bahaar define karna ha copy constructor to is tarah se karenge or oper yh denge student(student& t);
student::student(student& t)
{
	roll = t.roll;
	marks = t.marks;
}
*/
int main()
{
	cout << "Parametrized contructor output" << endl;
	student r(60, 30);
	r.showdata();
	cout << "Copy constructor" << endl;
	student stu(r); // copy contructor one way
	cout<<"after copy cons. details of stu are"<<endl;
	stu.showdata();
	student stm=r;  //copy constr. in second way
	cout<<"after copy cons. details of stm are"<<endl;
	stm.showdata();
	return 0;
}

/*output
Parametrized contructor output
roll no60
marks30
Copy constructor
after copy cons. details of stu are
roll no60
marks30
after copy cons. details of stm are
roll no60
marks30
*/








