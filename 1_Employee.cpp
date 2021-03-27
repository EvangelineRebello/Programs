#include<iostream>
using namespace std;

class Employee{
	int Id;
	char name[20];
	long salary;
	void getdata();
	public:
		/*Employee(int i, char n[20], long s)
		{
			setdata(i, n, s);
		}*/
	
		/*void setdata(int i, char n[20], long s)
		{
			Id=i;
			name[20]=n[20];
			salary=s;
		}*/
		void putdata();
};
void Employee::getdata()
		{
			cout<<"Enter Employee Id:"<<endl;
			cin>>Id;
			cout<<"Enter Employee Name:"<<endl;
			cin>>name;
			cout<<"Enter the salary:"<<endl;
			cin>>salary;
		}
void Employee::putdata()
		{
			getdata();
			cout<<"Employee Id is : "<<Id<<endl;
			cout<<"Employee name is : "<<name<<endl;
			cout<<"Employee salary is : "<<salary<<endl;
		}
int main()
{
	Employee A;
	//A.getdata();
	A.putdata();
	return 0;
}
