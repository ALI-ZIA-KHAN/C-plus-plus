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
The content of b inside  using pointer p2 is  136016
*/
