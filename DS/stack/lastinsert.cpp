#include<stdio.h>
#define pr printf
#difine SIZE 10
int a[SIZE],top=-1;
void push(int val)
{
    if(top>=10)
       printf{"stack overflow")
    else
       printf("enter num.:");
       scanf("%d",&val);
       a[++top]=val
}
void pop()
{
    if(top<0)
       printf("stack undeflow")
    else
       printf("enter ")
       x=a[top--]; 
}
int main()
{
    int x;
    push(val:10);
    pop(10);
    pop(x);
    printf("\n Deleted value :%d",a);
}