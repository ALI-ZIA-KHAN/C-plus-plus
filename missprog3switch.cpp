#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
 char grade='C';
 
 
 switch(grade)
   {
   	
   	case 'A':
   		cout<<"Execellent result"<<endl;
   		break;
   		
   	case 'B':
   		cout<<"Very good result"<<endl;
   		break;	
   	case 'C':
   		cout<<"good result"<<endl;
   		break;
   	case 'D':
   		cout<<"OK result"<<endl;
   		break;
   	default:
	   cout<<"INVALID GRADE"<<endl;	
   }
   cout<<"YOUR GRADE IS:"<<grade<<endl;
   return 0;  
  }
  
 
