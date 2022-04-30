//program to demonstrate prime number
#include<iostream.h>
#include<conio.h>
class prime
{
     public:

	 int show(int a)
	 {
	     int i,p=0;
	     for(i=2;i<a;i++)
	     {
		if(a%i==0)
		{
		    p=1;
		    break;
		}
	     }
	     return p;
	 }
};
void main()
{
	clrscr();

	int a,p;
	cout<<"enter  number : ";
	cin>>a;

	prime obj;
	p=obj.show(a);
	if(p==0)
	{
		cout<<"number is prime";
	}
	else
	{
		cout<<"number is not prime";
	}
	getch();
}