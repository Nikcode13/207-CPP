#include<conio.h>
#include<iostream.h>
class demo
{
       private:
	     int a;
       public:
		friend void get(demo s);
};
void get(demo s)
{
     cout<<"enter value of a=";
     cin>>s.a;
     cout<<"value of a= "<<s.a;
}
void main()
{
	clrscr();
	demo d;
	get(d);
	getch();
}