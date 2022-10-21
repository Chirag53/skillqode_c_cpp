#include<iostream>
using namespace std;

class Student
{
    int  rollno,Math,Eng,Sci,total;
    float per;
    char grade;
    public:

    void setInfo()
    {
        cout<<"\n Enter Rollno .:";
        cin>>rollno;
        cout<<"\n Maths Marks .:";
        cin>>Math;
        cout<<"\n English Marks .:";
        cin>>Eng;
        cout<<"\n Science Marks .:";
        cin>>Sci;
    }
    void calResult()
    {
        total=Math+Eng+Sci;
	    per=total/3;
	
		
    }
    void Result()
    {
        cout<<"\n \n Rollno\tMaths\tEnglish\tScience\tTotal\tPer\tGrade ";
	    cout<<"\n .........................................................";
        cout<<"\n" <<rollno<<"\t"<<Math<<"\t"<<Eng<<"\t"<<Sci<<"\t"<<total<<"\t"<<per<<"\t"<<grade;
        if(per>90)
		{
			cout<<"A";
		}
		else if(per>75)
		{
			cout<<"B";
		}
		else if(per>60)	
		{
			cout<<"C";
		}
		 else if(per>35)
		{
			cout<<"D";	
		}
		 else if(per<=35)
		{
			cout<<"F";
		}
    }
};
int main()
{
    Student obj;
    obj.setInfo();
    obj.calResult();
    obj.Result();
}
