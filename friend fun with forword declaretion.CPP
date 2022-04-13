
//program to demonstrat friend function
#include<conio.h>
#include<iostream.h>
class demo1;   //forword declaration
class demo
{
       private:
	     int a;
       public:
		void get_a();
		friend void add(demo s,demo1 s1);  //friend function
		void show_a();
};
class demo1
{
	private:
	      int b;
	public:
	     void get_b();
	     friend void add(demo s, demo1 s1);    //friend functon
	     void show_b();
};
void add(demo s,demo1 s1)
{
     cout<<s.a+s1.b;
}
void demo::get_a()
{
     cout<<"enter value of a=";
     cin>>a;
}
void demo1::get_b()
{
     cout<<"enter value of b=";
     cin>>b;
}
void demo::show_a()
{
     cout<<"value of a= "<<a<<endl;
}
void demo1::show_b()
{
     cout<<"value of b= "<<b<<endl;
}
void main()
{
	clrscr();
	demo d;
	d.get_a();
	d.show_a();

	demo1 d2;
	d2.get_b();
	d2.show_b();

	add(d,d2);

	getch();
}