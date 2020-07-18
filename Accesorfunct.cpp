#include<iostream>
#include<conio.h>
using namespace std;

class employee{
	private:
		int age;
		char *name;
	public:
	   employee(){
	   	
	   	age=0;
	   	name="null";
	   }	
		employee(int a,char n[]):age(a),name(n){
			
		};
		
		void showdata(){
			cout<<"The employee age is"<<age<<endl;
			cout<<"The employee name is"<<name<<endl;
			
		};
		/*Accessor functions are actually getter and setter*/ 
		char* getname(){
			
			return name;
		}
		void setname(char n[]){
			name=n;
			
		}
		int getage(){
			
			return age;
		}
		void setage(int a){
			age=a;
			
		}
};
int main(){
	
	employee e1;
	employee e2(18,"Ali");
	cout<<"The first employee is :  "<<endl;
	e1.showdata();
	cout<<"The second employee is :  "<<endl;
	e2.showdata();
	cout<<"NOW"<<endl;
	e1.setage(20);
	e1.setname("Ahmas");
    cout<<"After geter setter"<<endl;//now showing name by getter
	cout<<"The name is"<<e1.getname()<<endl;
	cout<<"The age is"<<e1.getage()<<endl;
	cout<<"With showdata now"<<endl;//now showing name n age with showdata also
	e1.showdata();
	e2.setage(10);
	e2.setname("Asad");
    cout<<"After geter setter"<<endl;//u=now again showing data with getter
	cout<<"The name is"<<e2.getname()<<endl;
	cout<<"The age is"<<e2.getage()<<endl;
	cout<<"With showdata now"<<endl;// now showing with showdata
	e2.showdata();
	
	
	
	
	return 0;
}
