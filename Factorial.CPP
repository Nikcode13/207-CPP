
//c++ factorial
#include<iostream.h>
#include<conio.h>
void main()
{
     int fact=1,no,i;
     clrscr();
     cout<<"enter number";
     cin>>no;
     if(no==0)
     {
	  cout<<"factorial are=>"<<fact;
     }
     else
     {
	    for(i=no;i>=1;i--)
	    {
		  cout<<i<<"*"<<fact<<"=";
		  fact=fact*i;
		  cout<<fact<<endl;
	    }
     }

     getch();

}