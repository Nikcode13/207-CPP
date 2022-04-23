//program for demonstrate use of class template for calculating area
#include<iostream.h>
#include<conio.h>
template<class t1,class t2>
class test
{
     public:
	   test(t1,t2) //constructor
	   {
	   }
	   void area(t1 x,t2 y)
	   {
		t1 tt;
		tt=0.5*x*y;
		cout<<"\n area of triangle :"<<tt;
	   }
	    void area1(t1 x,t2 y)
	   {
		t1 tt;
		tt=x*y;
		cout<<"\n are of rectangle :"<<tt;
	   }
	    void area2(t1 x)
	   {
		cout<<"\n area of circle :"<<3.14*x*x;
	   }
};
void main()
{
	clrscr();
	float l,b;

	cout<<"\nenter height and base for tringle ;";
	cin>>l>>b;
	test<float,float>test1(l,b);
	test1.area(l,b);

	int l1,b1;
	cout<<"\n enter the L and B :";
	cin>>l1>>b1;
	test<int,int>test2(l1,b1);
	test2.area1(l1,b1);

	int r;
	cout<<"\n eneter the tadius :";
	cin>>r;
	test<int,int>test3(r,r);
	test3.area2(r);
	getch();
}