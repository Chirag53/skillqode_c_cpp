#include<iostream>
using namespace std;

class student 
{
    int admo;
    string sname;
    float eng,maths,sci,total;
    public:
    student();
    void takeData(int,float,float,float,float);
    void cTotal();
    void showdata();
};
void student ::takeData(int,float,float,float,float)
{
    cout<<"Admission num :";
    cin>>admo;
    cout<<"\n your Name :";
    cin>>sname;
    cout<<"\n eng marks :";
    cin>>eng;
    cout<<"\n maths marks :";
    cin>>maths;
    cout<<"\n sci marks :";
    cin>>sci;
}
void student ::cTotal()
{
    Total=eng+maths+sci;
    cout<<"\n Admission num"<<"\t"<<"name"<<"\t"<<"eng"<<"\t"<<"maths"<<"'\t"<<"sci"<<"\t"<<"total";
    cout<<"\n-------------------------------------------------------------------------------";
}
void student ::showdata()
{
    cout<<"\n add no"<<"\t"<<"name"<<"\t"<<"eng"<<"\t"<<"maths"<<"'\t"<<"sci"<<"\t"<<"total";
    cout<<"\n-------------------------------------------------------------------------------";
}
int main()
{

}
