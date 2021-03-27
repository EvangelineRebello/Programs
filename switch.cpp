#include<iostream>
using namespace std;

int main()
{
	int choice,x,y,add,sub,mul,div;
	cout<<"Enter the first no.:";
	cin>>x;
	
	cout<<"Enter the second no:";
	cin>>y;
	do
	{
	cout<<"=====Menu=====\n";
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n";
	
	cout<<"Enter your choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1: add=x+y;
				cout<<"Addition is :"<<add<<endl;
				break;
		case 2: sub=x-y;
				cout<<"Subtraction is :"<<sub<<endl;
				break;
		case 3: mul=x*y;
				cout<<"Multiplication is :"<<mul<<endl;
				break;
		case 4: div=x/y;
				cout<<"Division is :"<<div<<endl;
				break;
		case 5: break;
		default: cout<<"Enter valid choice";
	}
	}while(choice!=5);
	
	
	return 0;
}
