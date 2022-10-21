//1
#include<iostream>
using namespace std;

class Student 
{
    int admo;
    string sname;
    float eng,maths,sci,total;
    public:
    
    

void takeData()
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
void cTotal()
{
    total=eng+maths+sci;
    cout<<"\n Admission num"<<"\t"<<"name"<<"\t"<<"eng"<<"\t"<<"maths"<<"'\t"<<"sci"<<"\t"<<"total";
    cout<<"\n-------------------------------------------------------------------------------";
}
void showdata()
{
    cout<<"\n"<<admo<<"\t\t"<<sname<<"\t"<<eng<<"\t"<<maths<<"\t"<<sci<<"\t"<<total;
}
};
int main()
{
    Student chirag;
    chirag.takeData();
    chirag.cTotal();
    chirag.showdata();
}
