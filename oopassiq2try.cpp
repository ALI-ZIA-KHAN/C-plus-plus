#include<iostream>
#include<conio.h>
using namespace std;
class fan{
 private:
 	const int SLOW=1;
 	const int MEDIUM=2;
 	const int FAST=3;
 	int speed;
    bool fon;
    double radius;
    string colour;
public: 
fan(){
 speed=1;
 fon=false;
 radius=5.0;
 colour="blue";	
  
};	
fan(int s,bool t,double r,string c):speed(s),fon(t),radius(r),colour(c) 
{
	  } ;
int getspeed(){
	
	return speed;
}	  
	   	
void setspeed(int s)	{
	
	speed=s;
}

int getfon(){
	
	return fon;
}	  
	   	
void setfon(bool t)	{
	
	fon=t;
}
int getradius(){
	
	return radius;
}	  
	   	
void setradius(int r)	{
	
	radius=r;
}
string getcolour(){
	
	return colour;
}	  
	   	
void setcolour(string c)	{
	
	colour=c;
	
}

void showdata(fan f1){
	if(fon==false){
		cout<<"the details of fan are"<<endl;
		cout<<"The fan is on"<<endl;
		cout<<"The fan speed is "<<f1.getspeed()<<"\n"<<"The fan colour is"<<f1.getcolour()<<"\n"<<"The fan radius is"<<f1.getradius()<<endl;	 
	
		}
	    
	else{		
	    cout<<"The details of fan are"<<endl;
		cout<<"The fan is off"<<"\n"<<"The fan speed is"<<f1.getspeed()<<"\n"<<"The fan radius is"<<f1.getradius()<<endl;
      
     /*  return f1;*/
   }

}
};
int main(){
	
	fan f1;
	f1.setspeed(2);
	f1.setfon(true);
	f1.setradius(5.5);
	f1.setcolour("red");
	fan f2;
	cout<<"We are in the main"<<endl;
	
	f1.showdata(f1);
	cout<<"The details of fan f2 is"<<endl;
	f2.showdata(f2);    
	
	
	
	    return 0;
}

/*We are in the main
The details of fan are
The fan is off
The fan speed is2
The fan radius is5
The details of fan f2 is
the details of fan are
The fan is on
The fan speed is 1
The fan colour isblue
The fan radius is5
*/



