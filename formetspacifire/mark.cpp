#include<iostream>
int main()
{
    int maths=90,physic=69,chemistry=77;
    std::cout<<"maths :"<<maths<<"\nphysic :"<<physic<<"\nchemistry :"<<chemistry;
    std::cout<<"\nTotal :"<<maths+physic+chemistry;
    std::cout<<"\nper :"<<(maths+chemistry+physic)*100/300;
}