#include<iostream>
using namespace std;

int *min(int &x,int &y)
{
	return x<y?&x:&y;
}

int main()
{
	int a,b,*c;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	c=min(a,b);
	cout<<"Minimum is : "<<*c;
	return 0;
}
