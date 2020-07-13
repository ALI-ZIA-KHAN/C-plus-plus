/*factorial of a number*/
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	
	int *fact;
	int a,b;
	int *pt1;
	cout<<"Enter number plx:"<<endl;
	cin>>a;
	pt1=&a;
	b=1;
	fact=&b;
	/**fact=20;*/
	for(int i=1;i<=*pt1;i++){
		*fact= *fact * i;
				
	}
	
	cout<<"The factorial of  "<<*pt1<<" is "<<*fact<<endl;
	_getch();
	return 0;	
	
}

