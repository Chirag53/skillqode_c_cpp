#include<iostream>
using namespace std;
int main()
{
	float salary,hra,da,z;
	cout<<"\n Enter salary :";
    cin>>salary;
	if(salary<=5000)
		{
			hra=salary*.08;
			da=salary*.2;
            cout<<"\n HRA :"<<hra<<"\n DA :"<<da;
		}
		else if(salary>=5000 && salary<=10000)
		{
			hra=salary*.12;
			da=salary*.3;
			cout<<"\n HRA :"<<hra<<"\n DA :"<<da;
		}
        else if(salary>=10000 && salary<=15000)
		{
			hra=salary*.15;
			da=salary*.4;
			cout<<"\n HRA :"<<hra<<"\n DA :"<<da;
		}
        else if(salary>15000)
		{
			hra=salary*.20;
			da=salary*.5;
			cout<<"\n HRA :"<<hra<<"\n DA :"<<da;
		}
		z=salary+hra+da;
        cout<<"\n total salary :"<<z;
}