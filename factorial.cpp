/*factorial of a number*/
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	
	int fact;
	int a;
	cout<<"Enter number plx:"<<endl;
	cin>>a;
	fact=1;
	for(int i=1;i<=a;i++){
		fact=fact*i;
				
	}
	
	cout<<"The factorial of  "<<a<<" is "<<fact<<endl;
    return 0;	
	
}
/*
Enter number plx:
5
The factorial of  5 is 120
*/
