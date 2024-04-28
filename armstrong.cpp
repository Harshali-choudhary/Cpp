//Write a program to check entered number is Armstrong number or not.
#include<iostream>
using namespace std;
int main()
{
	int num,r,q,cube=0,sum=0;
	cout<<"Enter the number : ";
	cin>>num;
	q=num;
	while(num!=0)
	{
		r=num%10;
		cube= r*r*r;
		sum=sum+cube;
		num=num/10;
	}
	if(q==sum)
	cout<<"Number is Armstrong.";
	else
	cout<<"Numberis not an armstrong.";
	return 0;
}
