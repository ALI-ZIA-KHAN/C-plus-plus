#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	float arr1[5]={23,45,67,99,11};
	float *pt2;
	cout<<"Address of arr1 using array are"<<endl;
	for(int i=0;i<5;i++)
	{
		
		cout<<"arr1["<<i<<"]="<<&arr1[i]<<endl;
	}
	cout<<endl;
	pt2=arr1;
	cout<<"Address of arr1 using pointers are"<<endl;
	for(int i=0;i<5;i++)
	{
		
		cout<<"pt2["<<i<<"]="<<pt2+i<<endl;
	}
	cout<<"Contents of arr1 using pointers are"<<endl;
	for(int i=0;i<5;i++)
	{
		
		cout<<"pt2["<<i<<"]="<<*pt2++<<endl;
	}
	cout<<"Contents of arr1 using array are"<<endl;
	for(int i=0;i<5;i++)
	{
		
		cout<<"arr1["<<i<<"]="<<arr1[i]<<endl;
	}
	cout<<endl;
	
	_getch();
	return 0;
	
	
}

/*output
Address of arr1 using array are
arr1[0]=0x6ffde0
arr1[1]=0x6ffde4
arr1[2]=0x6ffde8
arr1[3]=0x6ffdec
arr1[4]=0x6ffdf0

Address of arr1 using pointers are
pt2[0]=0x6ffde0
pt2[1]=0x6ffde4
pt2[2]=0x6ffde8
pt2[3]=0x6ffdec
pt2[4]=0x6ffdf0
Contents of arr1 using pointers are
pt2[0]=23
pt2[1]=45
pt2[2]=67
pt2[3]=99
pt2[4]=11
Contents of arr1 using array are
arr1[0]=23
arr1[1]=45
arr1[2]=67
arr1[3]=99
arr1[4]=11














