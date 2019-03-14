#include<iostream>
#define MAX 5	
using namespace std;

class CircularQueue
{
	int items[MAX],front, rear;
public:
	CircularQueue()
	{
		front = -1;
		rear = -1;
	}
	bool isFull()
	{
		if(front == 0 && rear == MAX-1 || front == rear +1)
		{
			return true;
		}
		return false;
	}
	bool isEmpty()
	{
		if(front == -1)
		{
			return true;
		}
		else 
			return false;
	}
	void enqueue(int data)
	{
		if(isFull())
		{
			cout<<"CircularQueue is full"<<endl;
		}
		else
		{
			if(front == -1)
			{
				front = 0; //making a place for first element to insert
			}
			rear = (rear+1) % MAX;
			items[rear] = data;
			cout<<"inserted data is:"<<data<<endl;
		}
	}
	void dequeue()
	{
		int data;
		if(isEmpty())
		{
			cout<<"queue is empty"<<endl;
		}
		else
		{	
			data = items[front];
			//if queue have only one element  i.e front == rear
			if(front == rear)
			{
				front = rear = -1; //resetting the queue
			}
			else
			{
				front = (front + 1)%MAX;
			}
			cout<<"deleted item is:"<<data<<endl;
		}
	}
	void display()
	{
		int i;
		if(isEmpty())
		{
		 	cout<<"queue is empty:"<<endl;
		}
		else
		{
			cout<<"the element is queue is:"<<endl;
			for(i = front;i != rear; i = (i+1)%MAX)
			{
				cout<<items[i]<<" ";
			}
            cout << items[i]<<endl; //1 item is always left behind 

		}
	}
};

int main()
{
	CircularQueue q;
	q.dequeue(); //cannot coz front = -1;

	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);

	q.enqueue(6); //fails

	q.display();
	q.dequeue();
	q.display();
	return 0;



}

