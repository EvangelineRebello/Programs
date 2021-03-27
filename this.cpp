#include<iostream>
using namespace std;

class num{
	int a,b;
	public:
		num(int x, int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a="<<a<<" and b="<<b<<endl;
		}
		num add(num);
};

num num::add(num x)
{
	a=a+x.a;
	b=b+x.b;
	return *this;//returns value at this pointer of object i.e. both a and b
}

int main()
{
	num obj1(1,2), obj2(3,4);
	obj1.display();
	obj2.display();
	obj1.add(obj2);
	obj1.display();
	
	return 0;
}
