//program to demonstrate class template
#include<iostream.h>
#include<conio.h>
template<class t1,class t2>
class test
{
    public:
	  test(t1 a,t2 b) //constructor
	  {
		cout<<a<<"\t"<<b;
	  }
	  void swap(t1 x,t2 y)
	  {
		t1 t;
		t=x;
		x=y;
		y=t;
		cout<<"\n x :"<<x<<"\t y :"<<y;
	  }
};
void main()
{
	clrscr();
	int p,q;
	cout<<"enter two integer for swap x and y :";
	cin>>p>>q;
	cout<<"befor swap x and y :\n ";
	test<int,int>test1(p,q);
	cout<<"\n after swap x ans y :\n";
	test1.swap(p,q);

	char a,b;
	cout<<"\nenter two charecter for swap x and y :";
	cin>>a>>b;
	cout<<"befor swap x and y :\n ";
	test<char,char>test2(a,b);
	cout<<"\n after swap x ans y :\n";
	test2.swap(a,b);
	getch();
}