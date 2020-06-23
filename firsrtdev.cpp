#include <iostream>
#include<string>
using namespace std;
int main()
{/*integers data type*/
 int a,b;/**integer data*//* int can store 4 bytes of int data*/
 a=12;	
 b=13;
 cout<<a+b<<endl;
 short c=12.6;/*will consider it 12*//*2 bytes*/
 long d=2563;/*8 bytes of int data*/
  cout<<c+d<<endl;


/*float data type*/
long double m,n;/*can store 12 bytes of float data*/
m=12.36562;
n=45.214525;
 cout<<m+n<<endl;

 float e=12;/* 4 bytes*/
 double f=32.6565; /*8 bytes*/
  cout<<e+f<<endl; 
  
 string x="NED";
 string y="UNIERSIT";
 char z='Y'; /*for 1 character only*/
  cout<<x+"\t"+y+z<<endl;

bool k=true;
 cout<<k<<endl;  
 return 0;
 
}
