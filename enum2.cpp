#include<iostream>
using namespace std;

enum days_of_week{Sun, Mon, Tue, Wed, Thu, Fri, Sat
};
int main()
{
	int diff;
	days_of_week day1,day2;
	day1=Tue;
	day2=Fri;
	diff=day2-day1;
	cout<<"Days between="<<diff<<endl;
	if(day1<day2)
		cout<<"day1 comes before day2\n";
	return 0;
}
