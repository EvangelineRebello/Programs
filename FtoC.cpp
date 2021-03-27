#include<iostream>
using namespace std;
int main()
{
	int temp,C;
	cout<<"Enter the temperature in F:";
	cin>>temp;
	C=(temp-32)*5/9;
	cout<<temp<<"F in Celsius is "<<C<<endl;
	return 0;
}
