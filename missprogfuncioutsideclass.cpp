#include<iostream>
#include<conio.h>
using namespace std;
//how to define func outside class body
//  :: double scope operator
class student{
	private:
		int rollno;
	public:
		void setrollno(int rn);//only declaraing func inside
		int getrn();
};
// returntype class :: function name()
void student::setrollno(int rn){  //func defining outside class
	rollno=rn;
}
int student::getrn(){
	return rollno;
}		

int main(){
	
	student s1;
	s1.setrollno(6);
	cout<<"the roll no is\t"<<s1.getrn()<<endl;
	
}
/*output
the roll no is  6
*/
