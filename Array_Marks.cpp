#include<iostream>

using namespace std;

int main()
{
	int no,i;
	float marks[10],per=0,total=0;
	cout<<"Enter number of subjects";
	cin>>no;
	cout<<"Enter the marks\n";
	for(i=0;i<no;i++)
	{
		cin>>marks[i];
	}
	for(i=0;i<no;i++)
	{
		total=total+marks[i];
	}
	per=total/no;
	cout<<"\nTotal Marks "<<total<<endl;
	cout<<"\nPercentage "<<per<<endl;
	
	return 0;
}
