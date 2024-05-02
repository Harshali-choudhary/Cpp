//Write a program to find greatest of three numbers using nested if-else.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter the First number : ";
	cin>>n1;
	cout<<" Enter the second number : ";
	cin>>n2;
	cout<<"Enter the third number : ";
	cin>>n3;
	if(n1>n2)
	{
		
		if(n1>n3)
		{
			cout<<n2<<" is greater than ";
		}
		else
		cout<<n3<<" is greater than ";
	}
	else if(n2>n3)
	cout<<n2<<" is greater than ";
}
