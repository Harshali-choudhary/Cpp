//Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
//corresponding operation and displays the result.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,res;
	char ch;
	cout<<"Operators is \n 1.Add \n 2.Sub \n 3. Multiplication \n 4. Divide \n 5. Exit";
	cout<<" \n Choice the operator : ";
	cin>>ch;
	do
	{
	    cout<<"\nEnter the number1 : ";
	    cin>>n1;
	    cout<<"\nEnter the number2 : ";
    	cin>>n2;
    	switch(ch)
    	{
    		case '+':
			  res=n1+n2;
			   cout<<" Addition is : "<<res; 
			   break;
			case '-':
				res=n1-n2;
				cout<<" Substraction is : "<<res;
				break;
			case '*':
		     	res= n1*n2;
			    cout<<" Multiplication is : "<<res;
			     break;
			case '/': 
			    res=n1/n2;
			    cout<<" Division is : "<<res;
				break;
			default :
			cout<<"Invalid operator.";		
			
		}
    }
    while(ch!=0);
    return 0;
	
}
