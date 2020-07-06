#include<conio.h>
#include<iostream>
using namespace std;
int fact(int n){
	
	
	if(n<=1){
		return 1;
	}

    else{
    	
    	return n*fact(n-1);
	}

}
int main(){
	
	int num;
	cout<<"give any no. to factorial"<<endl;
	cin>>num;
	cout<<"the factorial of no.\t"<<num<<"is\t"<<fact(num)<<endl;
	
	
	return 0;
	
	
}
/*output
give any no. to factorial
5
the factorial of no.    5is     120
*/
