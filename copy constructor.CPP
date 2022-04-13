//program to demonstrat copy constructor
#include<iostream.h>
#include<conio.h>
class demo
{
      private:
	    int a,b,c;
      public:
	    demo(int x,int y);    //parametarized constuctor
	    demo(demo &q);    //copy constuctor
	    void print();

};
demo::demo(int x,int y)          //constructor definetion
{
     a=x;
     b=y;
}
demo::demo(demo &q)
{
      a=q.a;
      b=q.b;
}
void demo::print()
{
      cout<<"value of a=>"<<a<<endl;
      cout<<"value of b=>"<<b<<endl;

}
void main()
{
	 clrscr();
	 demo d(10,20);
	 d.print();

	 demo d1(d); //copy constructor calling function
	 d1.print();
	 getch();
}