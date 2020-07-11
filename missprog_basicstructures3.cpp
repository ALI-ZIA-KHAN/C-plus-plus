#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	
struct Distance{
	int feets;
	float inches;
	
	
};
int main()
{
	Distance d1,d3;
	Distance d2={12,6.25};/*initializzng a structure*/
      cout<<"\n Enter feets";
      cin>>d1.feets;
      cout<<"\n Enter inches";
      cin>>d1.inches;
      
      
    d3.inches=d1.inches+d2.inches;
	d3.feets=0;
	if(d3.inches>=12.0){
		
		d3.inches-=12.0;
		d3.feets++;
	}  
	d3.feets=d1.feets+d2.feets;
	
	cout<<"values for d1 objects are:"<<d1.feets<<"&"<<d1.inches<<endl;
    cout<<"values for d1 objects are:"<<d2.feets<<"&"<<d2.inches<<endl;
    cout<<"values for d1 objects are:"<<d3.feets<<"&"<<d3.inches<<endl;

  _getch();
  return 0;
	
}
/*output
Enter feets14

 Enter inches15.5
values for d1 objects are:14&15.5
values for d1 objects are:12&6.25
values for d1 objects are:26&9.75

*/
