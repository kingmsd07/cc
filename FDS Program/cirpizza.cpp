#include<iostream>
using namespace std;
class cirQueue
{
	private:
		int front,rear,max;
		int Q[10];
	public:
		cirQueue()
		{
			front = rear = -1;
			max = 6;	
		}
		bool IsEmpty();
		bool IsFull();
		void EnQueue(int ele);
		void DeQueue();
		void display();
};

bool cirQueue::IsEmpty()
{
	if(front == -1)
	{
			return true;
	}
	else
	{
		return false;
	}
}
	
bool cirQueue::IsFull()
{
	if(((rear+1)%max) == front)
	{
			return true;
	}
	else
	{
		return false;
	}
}

void cirQueue::EnQueue(int ele)
{
	if(!IsFull())
	{
		if(front == -1)
		{
			front++;
		}
		rear = (rear+1)%max;
		Q[rear] = ele;
		cout<<"order is placed"<<endl;
	}
	else
	{
		cout<<"order are full"<<endl;
	}
}

void cirQueue :: DeQueue()
{
	if(!IsEmpty())
	{
		if(front == rear && front != -1)
		{
			cout<<"order is served"<<endl;
			rear = front = -1;
			return ;
		}
		else
		{
			front++;
			cout<<"order is served"<<endl;
		}
	}
	else
	{
		cout<<"all order is served"<<endl;	
	}
}

void cirQueue::display()
{
	if(!IsEmpty())
	{
		int temp = front;
		while(temp != rear)
		{
			cout<<Q[temp]<<" ";
			temp = (temp+1)%max;
		}
		cout<<Q[temp];
		cout<<endl;
	}
	else
	{
		cout<<"no order "<<endl;
	}
}

int display1()
{
	int k;
	cout<<"1. placed order \n2. served order  \n3. display order"<<endl;
	cout<<"enter choice "<<endl;
	cin>>k;
	return k;
}


int main()
{
	cirQueue c1;
	char ch;
	do
	{
		int k = display1();
		switch(k)
		{
			case 1:	
				int n;
				cout<<"enter order"<<endl;
				cin>>n;
				c1.EnQueue(n);
				break;
			case 2:
				c1.DeQueue();
				break;
			case 3:
				c1.display();
				break;
		}
		cout<<"do you want to continue y/n"<<endl;
		cin>>ch;
	}while(ch == 'y');

}
		
		
	
		


























 
