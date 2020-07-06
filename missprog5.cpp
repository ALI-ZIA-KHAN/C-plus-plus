#include<conio.h>
#include<iostream>
using namespace std;
int main()
/**factorial of a number using for loop*/

{
  int num;
  int fact=1;
  cout<<"please enter a no."<<endl;
  cin>>num;
  if(num==0 && num==1){
  
  	fact=1;
   }
  else
  {
  
  	for(int count=1;count<num+1;count++)
	  
	  {
  		
  		fact=fact*count;
	  }
}
	  cout<<"The factorial of\t"<<num<<"is\t"<<fact<<endl;
  
   return 0;  
  }
 
/*  OUTPUT  
 please enter a no.
5
The factorial of        5is     120
*/
