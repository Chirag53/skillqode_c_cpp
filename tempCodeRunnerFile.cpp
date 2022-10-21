#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int r1;
    char nm[20];
    
    public:
    void read();
    void display();
};
class marks:public Student
{
    protected:
    int s1;
    int s2;
    int s3;

    public:
    void getmarks();
    void putmarks();
};
class result:public marks
{
    int t;
    float p;
    char div[10];

    public:
    void process();
    void printresult();
};
void Student::read()
{
    cout<<"Enter roll no :";
    cin>>r1;
    cout<<"Enter name :";
    cin>>nm;
}
void Student::display()
{
    cout<<"\n roll no :"<<r1<<endl;
    cout<<"Name :"<<nm<<endl;
    cout<<"\n";
}
void marks::get marks()
{
    cout<<" Enter marks for 3 subjects :"<<endl;
    cin>>s1>>s2>>s3;
}
void marks::putmarks()
{
    cout<<"subject 1 :"<<s1<<endl;
    cout<<"subject 2 :"<<s2<<endl;
    cout<<"subject 3 :"<<s3<<endl;
}
void::process()
{
    t=s1+s2+s3;
    p=t/3.0;
    p>=60?strcpy(div,"first"):p>=50?strcpy(div,"second"):strcpy(div,"third");
}
void result::printresult()
{
    cout<<"Total="<<t<<endl;
    cout<<"\n";
    cout<<"percentase="<<p<<endl;
    cout<<"Division="<<div<<endl;
}
int main()
{
    result x;
    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
    return 0;
}