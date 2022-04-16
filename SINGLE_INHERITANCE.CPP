//program to demonstrat single-inheritance
#include<iostream.h>
#include<conio.h>
class student       //base class
{
    private:
	    char name[22];
	    int rollno;
    public:
	   void get();
	   void put();
};
class marks : public student      //derived clss
{
    private:
	   int m1,m2;
    public:
	   void get_info();
	   void put_info();
};
void student::get()
{
	cout<<"enter name = ";
	cin>>name;
	cout<<"enter roll no = ";
	cin>>rollno;
}
void student::put()
{
	cout<<"student name = "<<name<<endl;
	cout<<"roll no = "<<rollno<<endl;
}
void marks :: get_info()
{
	cout<<"enter marks of any two subject = ";
	cin>>m1>>m2;
}
void marks :: put_info()
{
	cout<<"marks of 1st subjest = "<<m1<<endl;
	cout<<"marks of 2nd subjest = "<<m2<<endl;
}
void main()
{
	clrscr();
	marks d;         //object of derived class
	d.get();
	d.get_info();
	cout<<"\n********** output **********\n"<<endl;
	d.put();
	d.put_info();
	getch();
}