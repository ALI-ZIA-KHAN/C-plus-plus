#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
 int a;
 cout<<"enter no:"<<endl;
 cin>>a;
 /*cin wale statement men endl lgaya to nhi chla, hyaya to chlgya*/
 
 
 /**== se compare krna*/
 if(a==3){
 	
 	cout<<"your no. is three\n"<<endl;
 	
 }
 else if(a==4){
 	cout<<"your no. is four"<<endl;
 }
 
 else{
 	cout<<"u entered someother no."<<endl;
 }
 
     return 0;
 
}
