#include<iostream>
#include<conio.h>
using namespace std;
class vehicle{
	private:
	 string	model;
	 string colour;
	 int regno;
	public:
	vehicle(){
	};	
/*	vehicle(){
     model="";
     colour="";
     regno=0; 
	};*/
	vehicle(string m,string c,int r):model(m),colour(c),regno(r){
		}; 
	~vehicle(){
		cout<<"The destructure is executed"<<endl;
		
	}; 
	void display(){
		cout<<"the model no of vehicle is  \t"<<model<<endl;
		cout<<"the colour of vehicle is  \t"<<colour<<endl;
		cout<<"thr regno of vhicle is   \t"<<regno<<endl;
		
	}
	string getmodel(){
		return model;
	}

    string getcolour(){
    	return colour;
	}
    int getregno(){
    	return regno;
	}
	
	void setmodel(string m){
		model=m;
	}

    void setcolour(string c){
    	colour=c;
	}

    void setegno(int r){
    	regno=r;
	}

};

int main(){
	
	vehicle car;
	vehicle boat("xprius20","red",1020);
	vehicle bike;
	cout<<"The details of car is"<<endl;
	car.display();
	cout<<"The details of boat are  "<<endl;
	boat.display();
	
	car.setcolour("blue");
    car.setmodel("CULTUS");
	car.setegno(5252);	
	cout<<"AFter using getters  "<<endl;
	car.display();
	cout<<"now bike"<<endl;
	bike.display();
	
	return 0;	
	
}



