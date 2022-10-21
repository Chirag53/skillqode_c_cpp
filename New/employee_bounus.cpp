
#include<iostream>
using namespace std;
class Employee
{
    int salary,hours,bonus,bsalary,total;
    string name;
    public:

    void basicInfo()
    {
        cout<<"\n Employee Name :";
        cin>>name;
    }
    void workingHours()
    {
        cout<<"\n Enter Working Hours of Yearly :";
        cin>>hours;
    }
    void bounsAmmount()
    {
        if(hours<2112)
        {
            bonus=0;
            cout<<"\n Your Bonus is :"<<bonus;
        }
        else if(hours<=3000)
        {
            bonus=(hours-2112)*250;
            cout<<"\n Your Bonus is :"<<bonus;
        }
        else
        {
            cout<<"\n Enter Correct information....";
        }
    }
    void calSalary()
    {
        salary=hours*125;
        bsalary=salary-bonus;
        cout<<"\n Your Basic Salary id :"<<bsalary;

        total=bsalary+bonus;
        cout<<"\n Your Total Salary is :"<<total;
    }
};
int main()
{
    Employee chiragl;
    chiragl.basicInfo();
    chiragl.workingHours();
    chiragl.bounsAmmount();
    chiragl.calSalary();
}   
 