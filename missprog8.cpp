#include<conio.h>
#include<iostream>
using namespace std;


int sum(int x,int y){
	
	return x+y;
}

double sum(double x,double y){
	
	
	return x+y;
}

long sum(long x,long y,long z){
	
	return x+y+z;
}

int main(){

  cout<<"The sum of no.s in first sum:"<<sum(7.5,7.5)<<endl;
  cout<<"The sum of no.s in second sum:"<<sum(4,5)<<endl;
  cout<<"The sum of no.s in third sum:"<<sum(3.5,6.0,9.5)<<endl;
  
  return 0;
}

