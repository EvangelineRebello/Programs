#include<iostream>
using namespace std;

class Publication
{
	private:
		string title;
		float price;
	public:
		/*Publication(string t, float p)
		{
			title=t;
			price=p;
		}*/
		void getdata()
		{
			cout<<"Enter title:";
			cin>>title;
			cout<<"Enter price:";
			cin>>price;
		}
		void putdata()
		{
			cout<<"Title is : "<<title<<endl;
			cout<<"Price is : "<<price<<endl;
		}
	
};

class Book:public Publication
{
	private:
		int pages;
	public:
		void getdata()
		{
			Publication::getdata();
			cout<<"Enter number of pages:";
			cin>>pages;
		}
		void putdata()
		{
			Publication::putdata();
			cout<<"Page count is : "<<pages<<endl;
		}
	
};

class Tape:public Publication
{
	private:
		float time;
	public:
		void getdata()
		{
			Publication::getdata();
			cout<<"Enter time in minutes: ";
			cin>>time;
		}
		void putdata()
		{
			Publication::putdata();
			cout<<"Time in minutes is : "<<time<<endl;
		}
	
};

int main()
{
	Publication p;
	Book b;
	Tape t;
	
	p.getdata();
	p.putdata();
	
	b.getdata();
	b.putdata();
	
	t.getdata();
	t.putdata();
	
	
	return 0;
}
