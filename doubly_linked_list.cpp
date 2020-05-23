#include<iostream>
using namespace std;

typedef struct node
{
    struct node* prev;
    int data;
    struct node* next;
}NODE,*PNODE;

class DoublyLL
{
    private:
            PNODE head = NULL;
    public:
            void InsertFirst(int);
            bool InsertLast(int);
            bool InsertAtPos(int,int);
            void DeleteFirst();
            void Deletelast();
            void DeleteAtpos(int);
            void Display();
            int Countnode();
};

void DoublyLL::InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> prev = NULL;
    newn -> data = no;
    newn -> next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn -> next = head;
        head -> prev = newn;
        head = newn;
    }
    
    //return true;
}

bool DoublyLL::InsertLast(int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = no;
    newn -> prev = NULL;
    newn -> next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp ->next = newn;
        newn ->prev = temp;
    }
    return true;
    
}

bool DoublyLL::InsertAtPos(int no,int pos)
{
    PNODE temp = head;

    PNODE newn = NULL;

    newn = new NODE;
    
    newn -> prev = NULL;
    newn->data = no;
    newn -> next = NULL;

    if(pos < 1 || pos > (Countnode()+1))
        return false;
    
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == (Countnode()+1))
    {
        InsertLast(no);
    }
    else
    {
        temp = head;
        while(pos != 2)
        {
            temp = temp -> next;
            pos--;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
    }
    
}

void DoublyLL::Display()
{
    PNODE temp = head;
    while(temp!= NULL)
    {
        cout<<(temp->data)<<" ";
        temp = (temp->next);
    }   
}

int DoublyLL::Countnode()
{
    int icnt = 0;
    PNODE temp = head;
    while(temp!= NULL)
    {
        icnt++;
        temp = (temp->next);
    }  
    return icnt; 
}
void DoublyLL::DeleteFirst()
{
    PNODE temp = head;

    if(head == NULL)
    {
        return;
    }
    else if((head->next) == NULL)
    {
        delete head;
        head = NULL;
    } 
    else
    {
        head = head -> next;
        free(head -> prev);
        head -> prev = NULL;
    }
    
}
void DoublyLL::Deletelast()
{
    PNODE temp = head;

    if(head == NULL)
    {
        return;
    }
    else if((head->next) == NULL)
    {
        delete head;
        head = NULL;
    } 
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp ->next;
        }
        temp -> prev -> next = NULL;
        delete temp;
    }
    
}
void DoublyLL::DeleteAtpos(int pos)
{
    PNODE temp = head;

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == Countnode())
    {
        Deletelast();
    }
    else
    {
        while(pos != 1)
        {
            temp = temp -> next;
            pos--;
        }
        temp -> next -> prev = temp -> prev;
        temp -> prev ->next = temp -> next;
        delete temp;
    }
    
}
int main()
{
    DoublyLL dobj;
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    dobj.InsertFirst(101);
    dobj.InsertLast(151);
    dobj.InsertLast(171);
    dobj.InsertAtPos(90,7);
    
    //cout<<"count is " << dobj.Countnode();
    cout<<"before deleting\n";
    dobj.Display();
    // cout<<"after deleting\n";
    // dobj.DeleteFirst();
    // dobj.Display();
    cout<<"\nAfter deleting";
    dobj.DeleteAtpos(1);
    dobj.Display();
    return 0;
}