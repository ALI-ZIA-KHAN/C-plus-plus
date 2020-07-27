#include<iostream>
#include<conio.h>
using namespace std;
class student{
	private:
		int rollno;
	public:
		void setrollno(int rn){
			
			rollno=rn;
		}
		int getrn(){
			
			return rollno;
		}
};

int main(){
	student s1;
	s1.setrollno(5);
	cout<<"the roll no is\t"<<s1.getrn()<<endl;
	
}
/*output
the roll no is  5
*/
