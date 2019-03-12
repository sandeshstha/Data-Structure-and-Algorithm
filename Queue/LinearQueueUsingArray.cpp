#include<iostream>
using namespace std;

int Queue[5], MaxSize =5, front = 0, rear = -1;

void insert()
{
	int data;
	if(rear == MaxSize-1)
	{
		cout<<"Queue is full."<<endl;
		return;
	}
	else
	{
		rear++;
		cout<<"enter the data in Queue"<<endl;
		cin>>data;
		Queue[rear] = data;
	}
}
void deleteData()
{
	if(rear<front)
	{
		cout<<"Queue is empty"<<endl;
		return;
	}
	else
	{
		cout<<"element deleted from the queue is:"<<Queue[front]<<endl;
		front++;
	}
}
void display()
{
	if(rear<front)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<"the elements is queue are:"<<endl;
		for(int i = front;i<=rear;i++)
		{
			cout<<Queue[i]<<" ";
		}
	}
}
int main()
{
	int choice;
	cout<<"1. Insert data in queue"<<endl;
	cout<<"2. Delete data from queue"<<endl;
	cout<<"3. display all elements"<<endl;
	cout<<"4. Exit"<<endl;


	do{
		cout<<"enter your choice:"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1: insert();
			break;
			case 2: deleteData();
			break;
			case 3: display();
			break;
			case 4: 
			exit(1);
			break;
			default: cout<<"invalid choice"<<endl;
		}
	}while(choice!=4);
	return 0;

}