#include<iostream>
using namespace std;

class num
{
	int a;
	public:
		void display(int a)
		{
			this->a=89;
			cout<<"num a="<<this->a<<endl;
			cout<<"display a="<<a<<endl;
		}
};

int main()
{
	num obj1;
	obj1.display(50);
	
	return 0;
}
