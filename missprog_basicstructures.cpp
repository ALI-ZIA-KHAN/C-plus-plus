#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	
struct part{
	int modelnumber;
	int partno;
	float cost;
	
	
};
int main()
{
	part part1;
	part1.modelnumber=100;
	part1.partno=10;
	part1.cost=1500;
	
	
	cout<<"The model no of car is"<<part1.modelnumber<<endl;
	cout<<"The part no of car is"<<part1.partno<<endl;
	cout<<"The cost of car is"<<part1.cost<<endl;

  _getch();
  return 0;
	
}
/*output
The model no of car is100
The part no of car is10
The cost of car is1500
*/
