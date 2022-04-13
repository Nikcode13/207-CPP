//program to demonstrat destructor
#include<conio.h>
#include<iostream.h>

class demo
{
     private:
	   int x,y;
     public:
	    demo();
	    demo(int a,int b);
	    demo(demo &q);
	   ~demo();
	   void show();
};
demo::demo()
{
     cout<<"Constructor called"<<endl;
}
demo::demo(int a,int b)
{
     x=a;
     y=b;
}
demo::demo(demo &q)
{
    x=q.x;
    y=q.y;
}
void demo::show()
{
     cout<<"valu of a= "<<x<<endl;
      cout<<"valu of b= "<<y<<endl;
}

demo::~demo()
{
      cout<<"Destructor called"<<endl;
}
void main()
{
	clrscr();
	demo d;
	demo d1(10,20);
	demo w(d1);
	d1.show();
	w.show();
	getch();
}