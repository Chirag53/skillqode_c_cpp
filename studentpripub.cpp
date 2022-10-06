#include<iostream>
using namespace std;

class Student
{
    intadmo;
    string sname;
    float Math,Eng,Sci,total;
    public:
    student();
    void TakeData();
    void CTotal();
    void ShowData();
};
    void student ::TakeData()
    {
        cout<<"\n Admission Num.:";
        cin>>admno;
        cout<<"\n Your Name:";
        cin>>sname;
        cout<<"\n Maths Marks .:";
        cin>>Math;
        cout<<"\n English Marks .:";
        cin>>Eng;
        cout<<"\n Science Marks .:";
        cin>>Sci;
    }
    void student ::CTotal()
    {
        total=Math+Eng+Sci;
	     cout<<"\n"<<admno<<"\t"<<name<<"\t"<<Math<<"\t"<<Eng<<"\t"<<Sci<<"\t"<<total;
	
		
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
