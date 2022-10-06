#include<iostream>
using namespace std;
int main()
{
	
	char ch='a';
	cout<<"Enter char :";
    cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
	    cout<<ch<<" is vowel";
	}
	else
	{
	    cout<<ch<<"  is consontant";
	}
	return 0;
}