#include<iostream>
using namespace std;
int main()
{
	int i,j,k=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(k%2==0)
		{
            cout<<"\t1";
		}
		else
		{
            cout<<"\t0";
		}
		k++;
		}
		cout<<"\n";
	}
	cout<<"\n";
}