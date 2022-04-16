//Program to demonstrateMultiple Inheritance
#include<iostream.h>
#include<conio.h>
class student
{
      private:
	    int rollno;
	    char name[15];
      public:
	     void get();
	     void put();
};
class mark
{
      protected:
	     int m1,m2,m3;
      public:
	     void get_marks();
	     void put_marks();
};
class result:public student,public mark
{
      private:
	     int total;
      public :
	     void get_total();
	     void put_total();
};

void student::get()
{
	cout<<"enter Roll number of student = ";
	cin>>rollno;
	cout<<"enter name of student = ";
	cin>>name;
}
void mark::get_marks()
{
	cout<<"enter marks of three subject "<<endl;
	cout<<"enter marks of first subject = ";
	cin>>m1;
	cout<<"enter marks of second subject = ";
	cin>>m2;
	cout<<"enter marks of third subject =  ";
	cin>>m3;
}
void student::put()
{
	cout<<"Roll number of Student is:- "<<rollno<<endl;
	cout<<"Name of Strudent is:- "<<name<<endl;
}
void mark::put_marks()
{
	cout<<"Marks of Three subjects are"<<endl;
	cout<<"Marks of First subject is:-  "<<m1<<endl;
	cout<<"Marks of Second subject is:-  "<<m2<<endl;
	cout<<"Marks of Third subject is:-  "<<m3<<endl;
}
void result::get_total()
{
	get();
	get_marks();
	total=m1+m2+m3;
}
void result:: put_total()
{
	put();
	put_marks();
	cout<<"total of Marks is:- "<<total;
}

void main()
{
	clrscr();
	result r;
	r.get_total();
	cout<<"\n************* output ************\n"<<endl;
	r.put_total();
	getch();
}













