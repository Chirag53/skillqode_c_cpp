#include<iostream>
using namespace std;
int main()
{

	char a;
    cout<<"\n char :";
	cin>>a;
	if(a>=65 && a<=90)
	{
		a=a+32;
		cout<<"\n char :"<<a;

	}
	else if(a>=97 && a<122)
	{
		a=a-32;
		cout<<"\n char :"<<a;
	}
}