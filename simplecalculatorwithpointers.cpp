#include<iostream>
#include<conio.h>
using namespace std;
int addition(int *pt1,int *pt2){
	int a=(*pt1)+(*pt2);
	return a;
	
}
int subtraction(int *pt1,int *pt2){
	
	int s=*pt1-*pt2;
	return s;
	
}
int multiplication(int *pt1,int *pt2){
	
	int m=*pt1 * *pt2;
	return m;
	
}
int division(int *pt1,int *pt2){
	
	int d=*pt1 / *pt2;
	return d;
	
}

int main(){
	
	int *pt1;
	int *pt2;
	int num1,num2;
	cout<<"Enter first number please"<<endl;
	cin>>num1;
	cout<<"Enter second number please"<<endl;
	cin>>num2;
	pt1=&num1;
	pt2=&num2;
	
	
	cout<<"The sum of the given numbers is:\t"<<addition(&num1,&num2)<<endl;
		cout<<"The product of numbers is:\t"<<multiplication(&num1,&num2)<<endl;
			cout<<"The result after subtraction is:\t"<<subtraction(&num1,&num2)<<endl;
				cout<<"The result after division is:\t"<<division(&num1,&num2)<<endl;
								
    _getch();
    return 0;			
	
	
}






/*output
Enter first no
5
Enter second number
6
The sum of is:11
The product  is:30
The subtraction is:-1
*/
