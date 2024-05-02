#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout<<"Enter the number :";
	cin>>num;
	if(num<=0)
	{
		cout<<"Factorial of negative number is not possible."<<endl;
	}
	else
	{
	
    	for(int i=1;i<=num;i++)
	   {
		fact=fact*i;
		
       }
	cout<<"The factorial of "<<num<<"is :"<<fact<<endl;
    }
	return 0;
}
