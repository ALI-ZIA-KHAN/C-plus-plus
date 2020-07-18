#include<iostream>
#include<conio.h>
using namespace std;


class circle
{
 private:
  
  int xcord;
  int ycord;
  double radius;
 	
 public:
    
 circle(){
 	
 	xcord=0;
 	ycord=0;
 	radius=0.0;
 	
 } ;  
    
  circle (int x,int y,double r):xcord(x),ycord(y),radius(r)
  {
		   };	 	
 	
 int getx(){
 	
 	return xcord;
 }	
 	
 void setx(int x){
 	
 	xcord=x;
 	
 }	
 int gety(){
 	
 	return ycord;
 }	
 	
 void sety(int y){
 	
 	ycord=y;
 	
 }	
 int getradius(){
 	
 	return radius;
 }	
 	
 void setradius(double r){
 	
       radius=r;
 	
 }	
 
 double circumference(){
 	
 	const int pi=3.14;
 	return 2*pi*radius;
    
 }
 
 double area(){
 	
 	const int pi=3.14;
 	return pi*radius*radius;
 	
 	
 }
 
 void showdata(){
 	
 	cout<<"The xcord of cirlcle is  "<<xcord<<endl;
 	cout<<"The ycord of cirlcle is  "<<ycord<<endl;
 	cout<<"The radius of cirlcle is  "<<radius<<endl;		
 }
 
};

 int main(){
 	
 	circle c1;
 	circle c2(5,6,7.2);
 	cout<<"The xcord of circle c1 is "<<c1.getx()<<endl;
 	cout<<"The ycord of circle c1 is "<<c1.gety()<<endl;
 	cout<<"The  radius of circle c1 is "<<c1.getradius()<<endl;
 	cout<<" with showdata"<<endl;
 	c2.showdata();
 	cout<<"now"<<endl;
 	c1.setx(7);
 	c1.sety(8);
 	c1.setradius(5.5);
 	cout<<"now cordx"<<c1.getx()<<endl;
 	cout<<"now ycord"<<c1.gety()<<endl;
 	cout<<"now radius"<<c1.getradius()<<endl;
 	cout<<"with showdata"<<endl;
 	c1.showdata();
 	
 	cout<<"The  circum ference of c1 is"<<c1.circumference()<<endl;
 	cout<<"The circumference of c2 is"<<c2.circumference()<<endl;
 	
 	
 	cout<<"The area of c1 is "<<c1.area()<<endl;
 	cout<<"the area of c2 is "<<c2.area()<<endl;
 	
 	return 0;
 }









