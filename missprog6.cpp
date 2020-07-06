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

	  cout<<"The factorial of\t"<<count<<"is\t"<<fact<<endl;
}


}
   return 0;  
  }
 
/*  OUTPUT  */
/*
please enter a no.
10
The factorial of        1is     1
The factorial of        2is     2
The factorial of        3is     6
The factorial of        4is     24
The factorial of        5is     120
The factorial of        6is     720
The factorial of        7is     5040
The factorial of        8is     40320
The factorial of        9is     362880
The factorial of        10is    3628800
*/

