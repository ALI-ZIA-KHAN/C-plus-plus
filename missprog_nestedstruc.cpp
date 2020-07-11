#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	
struct Distance{
	int feets;
	float inches;
	};
struct Room{
	Distance length;
	Distance width;
};	
	
int main()
{
   Room classroom;
   classroom.length.feets=15;
   classroom.width.inches=6.5;
   classroom.width.feets=10;
   classroom.length.inches=1.2;
   
  float l=classroom.length.feets;
  float m=classroom.length.inches; 
  float x=classroom.width.feets;
  float y=classroom.width.inches;  
   
   
   
	
	cout<<"values for classroom-1 are:"<<l<<"&"<<m<<endl;
    cout<<"values for classroom-2 are:"<<x<<"&"<<y<<endl;
    

  _getch();
  return 0;
	
}
/*output
values for classroom-1 are:15&1.2
values for classroom-2 are:10&6.5
*/
