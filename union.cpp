#include<iostream>
using namespace std;

int main()
{
	union abc{
		int x;
		char ch;
	}var;
	var.ch='A';
	cout<<var.x;
	return 0;
}

//Try and check for struct and class also
