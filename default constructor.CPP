//program to demonstrate constructer
#include<iostream.h>
#include<conio.h>
class demo
{
    private:
	  int count;
    public:
	 demo();      //default constructor
	 void print();
}
demo::demo()
{
    cout<<"constructor called"<<endl;
    count=0;
}
void demo::print()
{
       cout<<count<<endl;
}

void main()
{
       clrscr();
       demo d;
       d.print();

       demo d1,d2;
       d1.print();
       d2.print();
       getch();
}