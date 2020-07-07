#include<conio.h>
#include<iostream>
using namespace std;


double calcarea(double r)
{
	
	return 3.14*r*r ;
}

int main(){
	
	double r1,r2;
	double areaofring;
	cout<<"plz enter radius of outer circle"<<endl;
	cin>>r1;
	cout<<"plz enter radius of inner circle"<<endl;
	cin>>r2;
	areaofring=calcarea(r1)-calcarea(r2);
	cout<<"the radius of outer circle is"<<r1<<"\t"<<"radius of inner circle is:"<<r2<<endl;
	cout<<"the area of ring is:"<<areaofring<<endl;
	
	_getch();
	return 0;
	
	
}
/*output
plz enter radius of outer circle
5
plz enter radius of inner circle
3
the radius of outer circle is5  radius of inner circle is:3
the area of ring is:50.24
*/
