// INSERTION at the beginning using single linked list

#include<iostream>
using namespace std;


struct Node
{
    int info;
    Node *next;
} *start,*newptr,*save,*ptr;

Node * Create_New_Node(int);
void Insert_Beg(Node*) ;
void Display(Node*);


int main()
{
    start = NULL;
    int inf;
    char ch = 'y';
    while(ch =='Y' || ch =='y')
    {
        system("cls");
        cout<<"\n Enter Information for the new Node ....";
        cin>>inf;
        cout<<"\n Creating New Model !! Press Enter to continue ......";
        system("pause");
        newptr = Create_New_Node(inf);
        if (newptr != NULL)
        {
            cout<<"\n New Node Creted sucessfully ... ";
            system("pause");
        }
        else
        {
            cout<<"\n Cannot create new node !!!! Aborting !!\n";
            exit(1);
        }

        cout<< "\nNow insferting at the node in the beginning of the list ..\n";
        cout<<"Press Enter to continue";
        system("pause");
        Insert_Beg(newptr);
        cout<<"\n Now the list is:\n";
        Display(start);
        cout<<"\n Press Y to enter more nodes, N to exit ..\n";
        cin>>ch;
    }
    return 0;
}

// Creating a new node to insert

Node* Create_New_Node( int n)
{
    ptr = new Node ;
    ptr ->info = n;
    ptr ->next = NULL;
    return ptr;
}

// Code FOR Inserting at the beginning

void Insert_Beg(Node*np)
{
    if(start ==NULL)
        start = np;
    else
    {
        save = start;
        start = np;
        np ->next = save ;
    }
}

// Displaying the elements of Linked List

void Display(Node* np)
{
    while(np != NULL)
    {
        cout<< np-> info<<"->";
        np = np ->next;
    }
    cout<<"!!!\n";
}
