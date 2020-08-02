#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char num;
	cout<<"Enter any number"<<endl;
	cin>>num;
	switch(num){
		case '6':
			cout<<"The numbers is six"<<endl;
			break;
		
		case '5':
		    cout<<"The number is five"<<endl;
		    break;
		case '7':
		    cout<<"The number is seven"<<endl;
		     break;
		case '8':
		    cout<<"The number is eight"<<endl;		
			break;	
		default:
			cout<<"Your no. is invalid"<<endl;
		}
		
		
		cout<<"This is the result"<<endl;
	return 0;
}
/*output
Enter any number
5
The number is five
This is the result
*/



/*output
Enter any number
4
Your no. is invalid
This is the result
*/
