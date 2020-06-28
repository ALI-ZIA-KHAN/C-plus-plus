/**for loop**/
#include<iostream>
#include<conio.h>
#include<string>
/**very very important*/
/**cin considers space as terminating character , which means it willl
display only a single word even if u type more than 1 word*/
/*FOR solving this*/
/*getline(cin,var) function is used ,which takes line of text*/
using namespace std;
int main(){
 string a;
 cout<<"enter anything"<<endl;
 getline(cin,a);
 cout<<"see it has printed\t"<<a<<endl;
 
 return 0;
 
 }
/*this is outut screen*/
/*
enter anything
this world belongs to all
see it has printed      this world belongs to all */

