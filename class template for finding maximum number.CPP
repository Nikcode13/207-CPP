//program for demonstration function template for finding
//maximum number bertween 2 number
#include<iostream.h>
#include<conio.h>
template<class t>
t max(t a,t b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void main()
{
	clrscr();
	char ch1,ch2,ch3;
	cout<<"enter two charecter :";
	cin>>ch1>>ch2;
	cout<<"\n*********************\n";
	cout<<"maximum charecter :";

	ch3=max(ch1,ch2);

	cout<<"\nch3 = "<<ch3;
	cout<<"\n********************\n";

	int a,b,c;
	cout<<"\nenter two number :";
	cin>>a>>b;
	cout<<"\n************\n";
	cout<<"maximum integer is :";

	c=max(a,b);
	cout<<"\n c= "<<c;
	getch();
}