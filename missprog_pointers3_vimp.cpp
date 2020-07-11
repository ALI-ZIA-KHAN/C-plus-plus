#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;	
int main()
{
	int *p1,*p2; //pointers: they are initialized by *//
	int a=10;
	int b[10];
	p1=&a;  //to give value of a variable to pointer we use & sign 
	p2=b;   //to give array to pointer we don't use & sign
	
	
		
	cout<<"The address of a by using a is:"<<&a<<endl;
	cout<<"The address of a by using pointer p is:"<<p1<<endl;
	cout<<"The content of a using a is:"<<a<<endl;
	cout<<"The content of a inside pointer a1 using pointer p1 is\t"<<*p1<<endl;	
	cout<<"Now b\n"<<endl;		
	cout<<"The address of b by using a is:"<<&b<<endl;
	cout<<"The address of b by using pointer p is:"<<p2<<endl;
	cout<<"The content of b using b is:"<<b<<endl;
	cout<<"The content of b inside  using pointer p2 is\t"<<*p2<<endl;
	
	cout<<"**********"<<endl;
	a=20;
	cout<<"The address of a by using a is:"<<&a<<endl;
	cout<<"The address of a by using pointer p is:"<<p1<<endl;
	cout<<"The content of a using a is:"<<a<<endl;
	cout<<"The content of a inside pointer  using pointer p1 is\t"<<*p1<<endl;
	
	int c=50;
	p1=&c;/*if we change via creating new varible then address changes*/
	cout<<"The address of c by using a is:"<<&c<<endl;
	cout<<"The address of c by using pointer p is:"<<p1<<endl;
	cout<<"The content of c using c is:"<<c<<endl;
	cout<<"The content of c inside using pointer p1 is\t"<<*p1<<endl;
	
		cout<<"**********"<<endl;
	*p1=650;/*but here the address remains same of what we got in c above*/
		cout<<"The address of using pointer p is:"<<p1<<endl;
		cout<<"The content  inside pointer p1 using pointer p1 is\t"<<*p1<<endl;
	}
/*output
The address of a by using a is:0x6ffdfc
The address of a by using pointer p is:0x6ffdfc
The content of a using a is:10
The content of a inside pointer a1 using pointer p1 is  10
Now b

The address of b by using a is:0x6ffdd0
The address of b by using pointer p is:0x6ffdd0
The content of b using b is:0x6ffdd0
The content of b inside  using pointer p2 is    14226256
**********
The address of a by using a is:0x6ffdfc
The address of a by using pointer p is:0x6ffdfc
The content of a using a is:20
The content of a inside pointer  using pointer p1 is    20
The address of c by using a is:0x6ffdf8
The address of c by using pointer p is:0x6ffdf8
The content of c using c is:50
The content of c inside using pointer p1 is     50
**********
The address of using pointer p is:0x6ffdf8
The content  inside pointer p1 using pointer p1 is      650
