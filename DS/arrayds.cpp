#include<stdio.h>
void array(int *a)
{
    for(int  i=0;i<5;i++)
    a[i]*=2;
}
int main()
{
    int a[]={11,22,33,44,55};
    array(a);
    for(int i=0;i<5;i++)
     printf("\n %d - %u",a[i],&a[i]);
}