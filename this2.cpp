#include<iostream>
using namespace std;

class num{
	int a;
	public:
		void displayAddress()
		{
			cout<<"The memory address of the object is "<<this<<endl;
		}
		
};

int main()
{
	num obj1, obj2;
	obj1.displayAddress();
	obj2.displayAddress();
	
	return 0;
}
