#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *temp = NULL ,*temp1 = NULL , *temp2 = NULL ;

class binary
{
    private:
        Node *head ,*tail;
    public:
        binary()
        {
            head = tail = NULL;
        }
        void tobinary(int n);
        void onescomplement();
        void twoscomplement();
        void addition(binary &b1,binary &b2);
    //  void display1(binary &b1);
        void display(); 
};


void binary::tobinary(int n)
{
    if(n == 0)
    {
        return;
    }
    int k = n;
    while(n>0)
    {
        Node *node1 = new Node;
        node1 -> next = NULL;
        node1 -> prev = NULL;
        if(head == NULL)
        {
            head = tail = node1;
        }
        else
        {
            head -> prev = node1;
            node1 -> next = head;
            head = node1;
        }
        k = n%2;
        node1 -> data = k;
        n = n/2;
    }   
}

void binary::onescomplement()
{
    temp = head;
    while(temp != NULL)
    {
        if(temp -> data == 1)
        {
            temp -> data = 0;
        }
        else
        {
            temp -> data = 1;
        }
        temp = temp -> next;
    }
}

void binary::twoscomplement()
{
    temp = tail;
    while(temp != NULL)
    {
        if(temp -> data == 1)
        {   
            temp -> data = 0;
        }
        else
        {
            temp -> data = 1;
            break;
        }
        temp = temp -> prev;
    }
}

void binary::addition(binary &b1,binary &b2)
{
    if(b1.tail == NULL || b2.tail == NULL)
    {
        cout<<"error"<<endl;
        return ;
    }
    temp1 = b1.tail;
    temp2 = b2.tail;
    int carry = 0;

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1 -> data == 1 && temp2 -> data ==1 && (temp1 -> prev != NULL || temp2 -> prev != NULL))
        {
            Node *node1 = new Node;
            node1 -> prev = NULL;
            node1 -> next = NULL;
            if (head == NULL)
            {
                head = tail = node1;
            }
            else
            {
                head -> prev = node1;
                node1 -> next = head;
                head = node1;
            }
            if (carry == 1)
            {
                node1 -> data = 1;
                carry =1;
            }
            else
            {
                node1 -> data = 0;
                carry = 1;
            }
        }
        else if(temp1 -> data == 0 && temp2 -> data == 0)
        {
            Node *node1 = new Node;
            node1 -> prev = NULL;
            node1 -> next = NULL;
            if (head == NULL)
            {
                head = tail = node1;
            }
            else
            {
                head -> prev = node1;
                node1 -> next = head;
                head = node1;
            }
            if(carry == 1)
            {
                head -> data = 1;
                carry = 0;
            }
            else
            {
                head -> data = 0;
                carry = 0;
            }
        }
        else if(temp1 -> data == 1 && temp2 -> data == 0 || temp1 -> data == 0 && temp2 -> data == 1)
        {
            Node *node1 = new Node;
            node1 -> prev = NULL;
            node1 -> next = NULL;
            if (head == NULL)
            {
                head = tail = node1;
            }
            else
            {
                head -> prev = node1;
                node1 -> next = head;
                head = node1;
            }
            if(carry == 1)
            {
                node1 -> data = 0;
                carry = 1;
            }
            else
            {
                node1 -> data = 1;
                carry = 0;
            }
        }
        else if(temp1 -> data == 1 && temp2 -> data == 1 && temp1 -> prev == NULL && temp2 -> prev == NULL)
        {
            Node *node1 = new Node;
            node1 -> prev = NULL;
            node1 -> next = NULL;
            if (head == NULL)
            {
                head = tail = node1;
            }
            else
            {
                head -> prev = node1;
                node1 -> next = head;
                head = node1;
            }
            if (carry == 1)
            {
                node1 -> data = 1;
                carry = 1;
            }
            else
            {
                node1 -> data = 0;
                carry = 1;
            }
            node1 = new Node;
            node1 -> prev = NULL;
            head -> prev = node1;
            node1 -> next = head;
            head = node1;
            node1 -> data = 1;
        }
        temp1 = temp1 -> prev;
        temp2 = temp2 -> prev;
    }
    while(temp1 != NULL)
    {
            Node *node1 = new Node;
            node1 -> prev = NULL;
            node1 -> next = NULL;
            head -> prev = node1;
            node1 -> next = head;
            head = node1;
            if (carry == 1 && temp1 -> data == 1)
            {
                node1 -> data = 0;
                carry = 1;
            }
            else if(temp1 -> data == 0 && carry == 1 || (temp1 -> data == 1 && carry == 0))
            {
                node1 -> data = 1;
                carry = 0;
            }
            if (carry == 1 && temp1 -> prev == NULL)
            {
            	node1 = new Node;
            	node1 -> prev = NULL;
            	head -> prev = node1;
            	node1 -> next = head;
            	head = node1;
            	node1 -> data = 1;
            }
            temp1 = temp1 -> prev;
     }
    while(temp2 != NULL)
    {
            Node *node1 = new Node;
            node1 -> prev = NULL;
            node1 -> next = NULL;
            head -> prev = node1;
            node1 -> next = head;
            head = node1;
            if (carry == 1 && temp2 -> data == 1)
            {
                node1 -> data = 0;
                carry = 1;
            }
            else if(temp2 -> data == 0 && carry == 1 || (temp2 -> data == 1 && carry == 0))
            {
                node1 -> data = 1;
                carry = 0;
            }
            if (carry == 1 && temp2 -> prev == NULL)
            {
            	node1 = new Node;
            	node1 -> prev = NULL;
            	head -> prev = node1;
            	node1 -> next = head;
            	head = node1;
            	node1 -> data = 1;
            }
            temp2 = temp2 -> prev;
      }
    
    
}

void binary::display()
{
    if(head == NULL)
    {
        cout<<"Not found"<<endl;
        return;
    }
    temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

/* void binary::display1(binary &b1)
{
    temp = b1.tail;
    while(temp != NULL)
    {
        cout<<temp -> data;
        temp = temp -> prev;
    }
    cout<<endl;
}
 */
int main()
{
    int i,j;		
    binary b1,b2;
    cout<<"enter first no"<<endl;
    cin>>i;
    cout<<"enter second no"<<endl;
    cin>>j;
    b1.tobinary(i);
    b2.tobinary(j);
    cout<<"\nfirst binary no is -> ";
    b1.display();
    cout<<"\nsecond binary no is -> ";
    b2.display();
    binary b3;
    b3.addition(b1,b2);
    cout<<"\naddition is -> ";
    b3.display(); 
    cout<<"\nonescomplement of first bnary no is -> ";
    b1.onescomplement();
    b1.display();
    cout<<"\ntwoscomplement of first binary no is -> ";
    b1.twoscomplement();
    b1.display();  
    cout<<"\nonescomplement of second bnary no is -> ";
    b2.onescomplement();
    b2.display();
    cout<<"\ntwoscomplement of second binary no is -> ";
    b2.twoscomplement();
    b2.display(); 
    return 0;
}
