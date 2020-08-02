#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


int main()
{
	int num=6;
	int fact=1;
	int n=1;
	while(n<=num){
		
		fact=fact*n;
	cout<<"the factorial of  "<<n<<"  is   "<<fact<<endl;	
	n++;	
		
	}

return 0;
}
/*output
the factorial of  1  is   1
the factorial of  2  is   2
the factorial of  3  is   6
the factorial of  4  is   24
the factorial of  5  is   120
the factorial of  6  is   720

*/
