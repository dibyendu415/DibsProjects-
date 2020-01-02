//Program to check your age till date


# include <iostream>
using namespace std;
int main()
{
int birth_month,birth_year;
int current_month,current_year;
int ageinyear,ageinmonth;
cout<<"Age Calculator\n\n";

cout<<"\nEnter Your Birth Month(Eg:8): ";
cin>>birth_month;
cout<<"\nEnter Your Birth Year(Eg:1999): ";
cin>>birth_year;

cout<<"\nEnter The Current Month(Eg:12): ";
cin>>current_month;
cout<<"\nEnter The Current Year(Eg:2020): ";
cin>>current_year;
if (birth_month > current_month) 
{
         current_year = current_year - 1; 
         current_month = current_month + 12; 
}
ageinmonth= current_month - birth_month; 
ageinyear= current_year - birth_year;

cout<<"\n\nYour Age is "<<ageinyear<<" Years And "<<ageinmonth<<" Months ";
return 0;
}
