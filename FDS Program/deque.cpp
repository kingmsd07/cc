#include<iostream>
using namespace std;
class deque
{
		int front,rear;
		int max;
		int DQ[10];
	public:
		deque()
		{
			max = 5;
			front = rear = -1;
		}
		void enqueue_rear(int ele);
		void enqueue_front(int ele);
		void dequeue_rear();
		void dequeue_front();		
		void display();
		bool isempty();
		bool isfull();
};
bool deque::isempty()
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

bool deque::isfull()
{
	if(rear == max-1 && front == 0)
	{
		return true;
	}	
	else
	{
		return false;
	}
}

void deque::enqueue_rear(int ele)
{
	if(!isfull())
	{
		if(rear == max-1)
		{
			cout<<"you can try to insert other end"<<endl;
			return ;
		}
		if(front ==  -1)
		{
			front++;
		}
		rear++;
		DQ[rear] = ele;
	}
	else
	{
		cout<<"deque overflow"<<endl;
	}
}

void deque::enqueue_front(int ele)
{	
	if(!isfull())
	{
		if(front == 0)
		{
			cout<<"queue is full front end try to insert other rear end"<<endl;
			return;
		}
		if(front == -1)
		{
			front++;
			rear++;
			DQ[front] = ele;
			return;
		}
		front--;
		DQ[front] == ele;
	}
	else
	{
		cout<<"deque is full"<<endl;
	}
}

void deque::dequeue_rear()
{
		if(!isempty())
		{
			if(rear == 0)
			{
				front = rear = -1;
				return;
			}	
			rear--;
		}
		else
		{
			cout<<"deque is empty"<<endl;
		}
}
void deque::dequeue_front()
{	
		if(!isempty())
		{
			if(front == rear)
			{
				front = rear = -1;
				return ;
			}
			front++;
		}
		else
		{
			cout<<"deque is empty"<<endl;
		}
}
 
void deque::display()
{
	if(!isempty())
	{	
		int temp = front;
		while(temp<=rear)
		{
			cout<<DQ[temp]<<" ";
			temp++;
		}
		cout<<endl;
	}
	else
	{	
		cout<<"deque is empty"<<endl;
	}
}


int display1()
{
	cout<<"1. insert rear\n2. insert front\n3. delete rear\n4. delete front\n5. display"<<endl;
	int n;
	cin>>n;
	return n;
}

int main()
{
	deque d1;
	int n;
	char ch;
	do
	{
		int k = display1();
		switch(k)
		{
			case 1:
				cout<<"enter element to insert rear"<<endl;
				cin>>n;
				d1.enqueue_rear(n);
				break;
			case 2:
				cout<<"enter element to insert front"<<endl;
				cin>>n;
				d1.enqueue_front(n);
				break;
			case 3:
				d1.dequeue_rear();
				break;
			case 4:
				d1.dequeue_front();
				break;
			case 5:
				d1.display();
				break;
		}
		cout<<"you want to continue y/n"<<endl;
		cin>>ch;
	}while(ch == 'y');
	return 0;
}
		

			


		
		
		
		
	
		
