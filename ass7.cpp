#include<iostream>
using namespace std;

class node
{
    public:
        int prn;
        char name[50];
        node *next;
};

//Singly linked list class
class single_llist
{
    int length;
    node *head;
    node *create_node();
    public:
        single_llist()
        {
            head=NULL;
            length=0;
        }
        void insert();
        void display();
        void reverse();
        void search();
        void update();
        void total();
        void delete_pos();
        single_llist concatenate(single_llist list 2);
};

node *single_llist::create_node()
{
    node * temp, *s;
    temp=new (node);
    if(temp==NULL)
    {
        cout<<"Memory not allocated ";
        return 0;
    }
    int value;
    char name[LIMIT];
    cout<<"\nEnter PRN : ";
    cin>>value;
    cout<<"\nEnter Name : ";
    cin>>name;
    temp->prn=value;
    strcpy(temp->name,name);
    temp->next=NULL;
    return temp;
}

void single_llist::total()
{
    cout<<"\nTotal Members are : "<<length;
}

void single_llist::update()
{
    int pos,new_value,i;
    char nme[LIMIT];
    BML:cout<<"\nEnter position to update (0 to quit) : ";
    cin>>pos;
    if(pos==0)
        return;
    if(pos>length)
    {
        cout<<"Please enter valid location";
        goto BML;
    }
    node *s;
    s=head;
    cout<<"\nEnter new PRN : ";
    cin>>new_value;
    cout<<"\nEnter new Name : ";
    cin>>nme;
    if (pos == 1)
    {
        head->prn = new_value;
        head->name=nme;
    }
    else
    {
        for (i = 0;i < pos - 1;i++)
        {
            if (s == NULL)
            {
                cout<<"There are less than "<<pos<<"elements";
                return;
            }
            s = s->next;
        }
        s->prn = new_value;
        s->name = nme;
    }
    cout<<"Node Updated"<<endl;

}

int main()
{
    single_llist obj1, obj2, obj3;
    int ch, temp;
    cout<<"\n\nProgram for Club List  ";
    do{
        ch=0;
        cout<<"\n\n---------------------------";
        cout<<"\n 1. To Insert Entry \n 2. To Delete entry \n 3. To Display total no. of members \n 4. To Display member information \n 5. To Concatenate lists for two divisions \n 6. Exit \n";
        cin>>ch;
        cout<<"---------------------------";
        switch(ch)
        {
            case 1 :
                    cout<<"\n List '1' or List '2' ? ";
                    cin>>temp;
                    if(temp==1)
                        obj1.insert();
                    else if(temp==2)
                        obj2.insert();
                    
        }
    }

    return 0;
}