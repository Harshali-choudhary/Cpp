//Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the single digit : ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"One";
			break;
		case 2:
			cout<<"Two";
			break;
    	case 3:
			cout<<"Three";
			break;	
     	case 4:
			cout<<"Four";
			break;	
		case 5:
			cout<<"Five";
			break;
		case 6:
			cout<<"Six";
			break;
		case 7:
			cout<<"Seven";
			break;
		case 8:
			cout<<"Eight";
			break;
		case 9:
			cout<<"Nine";
			break;
		default :
			cout<<"Invalid digit....";
	}
	return 0;
}
