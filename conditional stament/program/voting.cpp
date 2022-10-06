#include<iostream>
using namespace std;
int main()
{
	int a;
    cout<<"Enter the age person :";
	cin>>a;
	if(a>=18)
	{
		cout<<"age "<<a<<" is Eligible for voting ";
	}
	else
	{
		cout<<"age "<<a<<" is Not Eligible for voting ";
	}
}