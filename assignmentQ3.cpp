#include<iostream>
#include<conio.h>
using namespace std;
class RentedVehicle{
	protected:
		double baseFee;
	public:
	 RentedVehicle(){
	 };
	 RentedVehicle(double bf):baseFee(bf){
	 	
	 };	
virtual	double getcost(){
		return baseFee;
	} 
	void setcost(double bf){
		baseFee=bf;
	}
};
class FuelVehicle:public RentedVehicle{
	private:
		double Kms;
	public:
	 double mileagefees=0;	
	 FuelVehicle(){
	 };
	 FuelVehicle(double k):Kms(k){
	 	
	 };	
//	 double milaegefees=0;
	double getmileagefees(){
	if(Kms<100){
		mileagefees=0.2*Kms	;
		return mileagefees;
	} 
	else if(Kms<=100){             
	  mileagefees=0.3*Kms;
	   return mileagefees;
	}
	else{
		
		mileagefees=0.3*400+(0.5*(mileagefees/400));
		return mileagefees;
      }
    }
    
    
    	double getkms(){
		return Kms;
	} 
	void setkms(double k){
		Kms=k;
	}
};

class Car:public FuelVehicle{
	private:
	  int seats;
	public:
	   Car(){
	   };
	   
	   Car(int s):seats(s){
	   };
	   
virtual	double getcost(int s,double bf){
		
		return seats*baseFee;
	}   
	void setseats(int s){
		
		seats=s;
	}     
};
class Truck:public FuelVehicle{
	private:
	  int capacity;
	public:
	   Truck(){
	   };
	   
	   Truck(int c):capacity(c){
	   };
	   
virtual	double getcost(int t,double bf){
		
		return capacity*baseFee;
	}   
	void setcapacity(int c){
		
		capacity=c;
	}     
};

class Bicycle:public RentedVehicle{
	private:
		int ndays;
	public:
	 Bicycle(){
	 };
	 Bicycle(int d):ndays(d){
};

virtual  double getcost(int d,double bf){
  	
  	return bf*d;
  }
  void setndays(int d){
  	
  	ndays=d;
  	
  }	 	
  
};



int main(){
	
    double you;
    RentedVehicle r1(6.6);
	Bicycle t1(7);
	you=t1.getcost(7,5.4);
	cout<<"the cost is of bicycle is\t"<<you<<endl;
	
	
}
