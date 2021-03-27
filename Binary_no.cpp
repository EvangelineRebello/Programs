// Assignment No. :	6				Roll : '31'		Date :

/*
	Write a C++ program to
	Store
	Display
	Find One's
	Two's compliment
	of Binary Number
	using Doubly-Linked List
*/

#include <iostream>

using namespace std;

//Various Classes
class node							//Doubly-Linked List node
{
public :
	node *prev,*next;
	int bit;
};

class doubly_llist					//Doubly-Linked List Class to Store number
{
	int length;
	node *create();
public :
	node *head,*tail;
	doubly_llist()
	{
		head=tail=NULL;
		length++;
	}
	void append_last();
	void display();
	void null_();
	void ones_compliment();
	void twos_compliment();	
	doubly_llist addition(doubly_llist B);
};

//Various Functions
node *doubly_llist::create()
{
	int value;
	node *temp;
	temp = new node();
	if(temp==NULL)
	{
		cout<<"\nMemory Full!";
	}
	else
	{
L :		cout<<"Enter bit : ";
		cin>>value;
		if(value!=1&&value!=0&&value!=-1)
		{
			cout<<"Please enter valid bit.\n\n";
			goto L;
		}
		temp->prev=NULL;
		temp->bit=value;
		temp->next=NULL;
	}
	return temp;
}

void doubly_llist::append_last()
{
	node *temp;
	cout<<"\nEnter the binary number (-1 to stop) :- \n\n";
	while(1)
	{
		temp = create();
		if(temp->bit==-1)
			break;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			temp->prev=tail;
			tail=temp;	
		}
		length++;
	}
}

void doubly_llist::null_()
{
	head=NULL;
	tail=NULL;
	length=0;
}

void doubly_llist::display()
{
	node *current;
	current=head;
	while(current!=NULL)
	{
		cout<<current->bit;
		current=current->next;
	}
}

void doubly_llist::ones_compliment()
{
	node *current;
	current=head;
	while(current!=NULL)
	{
		if(current->bit==0)
			current->bit=1;
		else
			current->bit=0;
		current=current->next;
	}
}

void doubly_llist::twos_compliment()
{
	node *current;
	int flag;
	flag=0;
	current=tail;
	while(current!=NULL)
	{
		if(flag==0)
		{
			if(current->bit==1)
				flag=1;
		}
		else
		{
			if(current->bit==0)
				current->bit=1;
			else
				current->bit=0;
		}
		current=current->prev;
	}
}

doubly_llist doubly_llist::addition(doubly_llist B)
{
	int carry=0,sum;
	node *first,*second,*res,*temp;
	doubly_llist result;
	
	res = NULL;
	first = tail;
	second = B.tail;
	
	while(first!=NULL && second!=NULL)
	{
		if(carry==0)
		{
			if (first->bit==0 && second->bit==0)
			{
				sum=0;
				carry=0;
			}
			else if (first->bit==0 && second->bit==1)
			{
				sum=1;
				carry=0;
			}
			else if (first->bit==1 && second->bit==0)
			{
				sum=1;
				carry=0;
			}
			else if (first->bit==1 && second->bit==1)
			{
				sum=0;
				carry=1;
			}
		}
		else if(carry==1)						//Respective Conditions Checking
		{
			if (first->bit==0 && second->bit==0)
			{
				sum=1;
				carry=0;
			}
			else if (first->bit==0 && second->bit==1)
			{
				sum=0;
				carry=1;
			}
			else if (first->bit==1 && second->bit==0)
			{
				sum=0;
				carry=1;
			}
			else if (first->bit==1 && second->bit==1)
			{
				sum=1;
				carry=1;
			}
		}
		
		temp = new node();
		temp->prev = NULL;
		temp->bit = sum;						//New Node Creation
		temp->next = NULL;
		
		if(res==NULL)
		{
			res = temp;
			tail = temp;
		}
		else
		{
			temp->next = res;
			res->prev = temp;
			res = temp;
		}
		
		first = first->prev;				//We need to traverse in rev order
		second = second->prev;				//ie from LSB to MSB
	}
	
	while(first!=NULL)
	{
		temp = new node();
		if(carry==1)
		{
			if(first->bit==0)
			{
				temp->bit = 1;
				temp->prev = NULL;
				temp->next = res;
				res->prev = temp;
				res = temp;
				first = first->prev;
			}
			else if(first->bit==1)
			{
				temp->bit = 0;
				carry=1;
				temp->prev = NULL;
				temp->next = res;
				res->prev = temp;
				res = temp;
				first = first->prev;
			}
		}
		else if(carry==0)
		{
			temp->bit = first->bit;
			temp->prev = NULL;
			temp->next = res;
			res->prev = temp;
			res = temp;
			first = first->prev;
		}
	}
	while(second!=NULL)
	{
		temp = new node();
		if(carry==1)
		{
			if(second->bit==0)
			{
				temp->bit = 1;
				temp->prev = NULL;
				temp->next = res;
				res->prev = temp;
				res = temp;
				second = second->prev;
			}
			else if(second->bit==1)
			{
				temp->bit = 0;
				carry=1;
				temp->prev = NULL;
				temp->next = res;
				res->prev = temp;
				res = temp;
				second = second->prev;
			}
		}
		else if(carry==0)
		{
			temp->bit = second->bit;
			temp->prev = NULL;
			temp->next = res;
			res->prev = temp;
			res = temp;
			second = second->prev;
		}
	}
	
	if(carry==1)
	{
		temp = new node();
		temp->prev = NULL;
		temp->bit = carry;						//Carry Node Creation
		temp->next = NULL;
		
		temp->next = res;
		res->prev = temp;
		res = temp;
	}
	result.head = res;
	return result;
}

//main()
int main()
{
	doubly_llist obj,obj2,obj3;
	int ch,temp;
	cout<<"\nProgram to Store, Display, Find One's and Two's Compliment of a Binary Number using Doubly-Linked List.";
	do {
    ch=0;
    temp=1;
	cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n 1 to Read Binary Number.\n 2 to Display Number.\n 3 to Find One's Compliment.\n 4 to Find Two's Compliment.\n 5 to Add two Nos.\n 0 to Quit.\n\nEnter your choice : ";
	cin>>ch;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	switch(ch)
	{
		case 1 : cout<<"\nEnter which Number to enter 1st or 2nd : ";
		F:		 cin>>temp;
				 if(temp==1)
				 {
				 	obj.null_();
				 	obj.append_last();
				 }		
				 else if(temp==2)
				 {
				 	obj2.null_();
    			 	obj2.append_last();
				 }
				 else
				 {
				 	cout<<"\nEnter valid number :- ";
				 	goto F;
				 }		 
				 break;
		case 2 : cout<<"\nThe First binary number is :- \n\n";
				 obj.display();
				 cout<<"\n\nSecond Binary Number is :- \n\n";
    			 obj2.display();
    			 break;	
		case 3 : obj.ones_compliment();
				 cout<<"\nOne's Compliment is :- \n\n";
				 obj.display();
				 obj.ones_compliment(); 
				 break;	
		case 4 : obj.twos_compliment();
				 cout<<"\nTwo's Compliment is :- \n\n";
				 obj.display();
				 obj.twos_compliment();    			
    			 break; 
    	case 5 : obj3.null_();
    			 obj3 = obj.addition(obj2);
				 cout<<"\n\nAddition is :- \n\n";
				 obj3.display();   			
    			 break;   			 
		case 0 : break;
		default : cout<<"\nInvalid Option!";			 
	}
	}while(ch!=0);
	
	cout<<"\nThank you for using this program. :D \n\n";
	return 0;

}

/* OUTPUT

Program to Store, Display, Find One's and Two's Compliment of a Binary Number using Doubly-Linked List.

~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 0 to Quit.

Enter your choice : 1
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter the binary number (-1 to stop) :- 

Enter bit : 1
Enter bit : 0
Enter bit : 0
Enter bit : 1
Enter bit : 1
Enter bit : 0
Enter bit : 1
Enter bit : 1
Enter bit : -1


~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 0 to Quit.

Enter your choice : 2
~~~~~~~~~~~~~~~~~~~~~~~~~~~

The binary number is :- 

10011011

~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 0 to Quit.

Enter your choice : 3
~~~~~~~~~~~~~~~~~~~~~~~~~~~

One's Compliment is :- 

01100100

~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 0 to Quit.

Enter your choice : 4
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Two's Compliment is :- 

01100101

~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 5 to Add two Nos.
 0 to Quit.

Enter your choice : 1
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter the binary number (-1 to stop) :- 

Enter bit : 1
Enter bit : 0
Enter bit : 0
Enter bit : 1
Enter bit : -1

~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 5 to Add two Nos.
 0 to Quit.

Enter your choice : 2
~~~~~~~~~~~~~~~~~~~~~~~~~~~

The binary number is :- 

1001

~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 5 to Add two Nos.
 0 to Quit.

Enter your choice : 5
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter Second Binary Number :- 

Enter the binary number (-1 to stop) :- 

Enter bit : 1
Enter bit : 1
Enter bit : 1
Enter bit : -1

Second Binary Number is :- 

111

Addition is :- 

10000

~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1 to Read Binary Number.
 2 to Display Number.
 3 to Find One's Compliment.
 4 to Find Two's Compliment.
 5 to Add two Nos.
 0 to Quit.

Enter your choice : 0
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Thank you for using this program. :D 

*/
