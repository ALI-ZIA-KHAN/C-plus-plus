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
	part part1={200,50,515.34};/*initializzng a structure*/
	part part2;
	part2.modelnumber=100;
	part2.partno=10;
	part2.cost=1500;
	
	
	cout<<"The model no of car is"<<part1.modelnumber<<endl;
	cout<<"The part no of car is"<<part1.partno<<endl;
	cout<<"The cost of car is"<<part1.cost<<endl;
	
	
	cout<<"\nThe model no of car is"<<part2.modelnumber<<endl;
	cout<<"The part no of car is"<<part2.partno<<endl;
	cout<<"The cost of car is"<<part2.cost<<endl;

  _getch();
  return 0;
	
}
/*output
The model no of car is200
The part no of car is50
The cost of car is515.34

The model no of car is100
The part no of car is10
The cost of car is1500
*/

