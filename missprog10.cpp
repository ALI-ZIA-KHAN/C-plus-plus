#include<conio.h>
#include<iostream>
using namespace std;

int main(){
	
	int wdcount=1;
	int chrcount=0;

	char ch='a';
	cout<<"plz enter the phrase"<<endl;
	while((ch=getch())!='\r')
	{
	cout<<ch;
		if(ch==' '){
			wdcount++;
		}
		else{
			chrcount++;
		}
	}
	cout<<endl;
	cout<<"In your phrase the the words are;"<<wdcount<<endl;
	cout<<"In your phrase the the characters are;"<<chrcount<<endl;
	
	return 0;
}

/*OUTPPUT
plz enter the phrase
I AM A PAKISTANI
In your phrase the the words are;4
In your phrase the the characters are;13
*/
