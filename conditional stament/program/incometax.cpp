#include<iostream>
using namespace std;
int main()
{
    float income,tax;
	
    cout<<"\n Enter your salary :";
    cin>>income;

	if(income<=2500)
	{
	tax=income*.0;
	cout<<"\n your tax is :"<<tax;
	}
	else if(income<=5000)
	{
	tax=(income-2500)*.10;
	cout<<"\n your tax is :"<<tax;
	}	
	else if(income<=10000)
	{
	tax=(income-5000)*.20+250;
	cout<<"\n your tax is :"<<tax;
	}
	else if(income>10000)
	{
	tax=(income-10000)*.30+250+1000;
	cout<<"\n your tax is :"<<tax;
	}
}