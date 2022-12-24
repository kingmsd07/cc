#include<iostream>
using namespace std;
class que1
{
	public:
		int Q[10];
		int front , rear;
		int max;
		que1()
		{
			front = rear = -1;
			max = 4;
		}
		bool IsEmpty();
		bool IsFull();
		void Enqueue(int ele);
		int dequeue();
		void display();
};

bool que1::IsEmpty()
{
	if(rear == -1 && front == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool que1::IsFull()
{
	if(rear == max-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void que1::Enqueue(int ele)
{
	if(!IsFull())
	{
		if(front == -1)
		{
			front = 0 ;
		}
		rear++;
		Q[rear] = ele;
	}
	else
	{
		cout<<"\nQue overflow"<<endl<<endl;
	}
}

void que1::display()
{
	if(!IsEmpty())
	{
		int k = front;
		while(k<=rear)
		{
			cout<<Q[k]<<" ";
			k++;
		}
		cout<<endl;
	}
	else
	{
		cout<<"\nQue is empty"<<endl<<endl;
	}
}

int que1::dequeue()
{
	if(!IsEmpty())
	{
		int temp = Q[front];
		if(front == rear)
		{
			front = rear = -1;
			return temp;
		}
		front++;
		return temp;
	}
	else
	{
		cout<<"\nque is empty"<<endl<<endl;
		return 0;
	} 
}

int display()
{
	int k;
	cout<<"add job -> 1\ndelete job -> 2\ndisplay job -> 3"<<endl;
	cout<<"enter chioce"<<endl;
	cin>>k;
	return k;
}

int main()
{
	que1  q;
	int flag = 0;
	while(1)
	{
		int n = display();
		switch(n)
		{
			case 1:
				int k;
				cout<<"enter element for insert"<<endl;
				cin>>k;
				q.Enqueue(k);
				break;
			case 2:
				q.dequeue();
				break;
			case 3:
				cout<<endl;
				q.display();
				break;
			case 4:
				flag = 1;
				break;
		}
		if(flag == 1)
		{
			break;
		}
	}
}
				
			

