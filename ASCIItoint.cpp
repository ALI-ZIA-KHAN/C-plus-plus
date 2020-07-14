#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	char chunit,chten;
	int un,ten,ans;
	
	cout<<"Enter no for ten: "<<endl;
	cin>>chten;
	cout<<"Enter no for unit: "<<endl;
	cin>>chunit;
	
	ten=chten-48;
	un=chunit-48;
	
	ans=ten*10+un;
	
	cout<<"The integer value is "<<ans<<endl;
	
	
	return 0;
	
}

/*
Enter no for ten:
8
Enter no for unit:
2
The integer value is 82
*/
