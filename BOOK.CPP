#include<iostream>
using namespace std;

class Book
{
    int Bookno,Copy;
    string BOOKTITLE;
    float totalPrice,Price;
    public:

    void INPUT()
    {
        cout<<"Enter Book No :";
        cin>>Bookno;
        cout<<"\n Enter Book Title :" ;   
        cin>>BOOKTITLE;
        cout<<"\n Enter Book price :";   
        cin>>Price; 
    }
    void PURCHASE()
    {
        cout<<"\n Enter  Number of Copy :";
        cin>>Copy;
    }
    void totalCost()
    {
        totalPrice=Price*Copy;
        cout<<"\n Total Price :"<<totalPrice;
    }
};
int main()
{
    Book Story;
    Story.INPUT();
    Story.PURCHASE();
    Story.totalCost();
}
