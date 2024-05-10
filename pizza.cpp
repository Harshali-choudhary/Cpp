//Create menu driven program for Pizza Shop.And display total amount,
#include<iostream>
using namespace std;
int main()
{
	int choice,sum=0,qty;
	cout<<"Types of Pizza : "<<endl<<" 1.California Pizza Rs 200 "<<endl<<" 2.Cheese pizza  Rs 500 "<<endl<<" 3.Detroit pizza   Rs 600 "<<endl<<" 4.Paneer pizza   Rs 400"<<endl<<"5. Exit";
	do
	{
    	cout<<"\n Enter the choice : ";
     	cin>>choice;
	    switch(choice)
	   {
		case 1:
			cout<<"Enter the quanity : ";
			cin>>qty;
			sum=sum+200*qty;
			cout<<"California pizza is order.";
			break;
			case 2:
			cout<<"Enter the quanity : ";
			cin>>qty;
			sum=sum+500*qty;
			cout<<"Cheese pizza is order.";
			break;
			case 3:
			cout<<"Enter the quanity : ";
			cin>>qty;
			sum=sum+600*qty;
			cout<<"Detroit pizza is order.";
			break;
			case 4:
			cout<<"Enter the quanity : ";
			cin>>qty;
			sum=sum+400*qty;
			cout<<"Paneer pizza is order.";
			break;
			case 5:
			cout<<"Total amount = "<<sum;
			break;
			default: 
			cout<<"Invalid choice";		
     	}
    }
           while(choice!=5);
			cout<<"\n Thank you visit again..........";
		
	

	    return 0;

}
