#include<iostream>
using namespace std;

int main()
{
	enum Bool{True,False
	}var;
	var=True;
	cout<<"Variable value="<<var<<endl;
	
	enum test{x=1,y=1,z=1
	};
	cout<<x<<y<<z<<endl;
	return 0;
}
