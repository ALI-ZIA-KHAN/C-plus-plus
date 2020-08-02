#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char num='7';
	switch(num){
		case '6':
			cout<<"The numbers is six"<<endl;
			//break;
		
		case '5':
		    cout<<"The number is five"<<endl;
		    //break;
		case '7':
		    cout<<"The number is seven"<<endl;
		//break;
		case '8':
		    cout<<"The number is eight"<<endl;		
			//break;	
		default:
			cout<<"Your no. is invalid"<<endl;
		}
		
		
		cout<<"this was the result"<<endl;
	return 0;
}

/*output
The number is seven
The number is eight
Your no. is invalid
this was the result
*/
