#include<iostream>
#define MAXSIZE 5
using namespace std;

int cQueue[MAXSIZE];
int front=MAXSIZE,rear=MAXSIZE;
void insert(int data)  //insertion is done from rear
{
	if(rear == MAXSIZE-1) //make a place for insertion
	{
		rear = 0;
	}
	else
		rear++; //rear is incremented by 1
	if(rear == front)
	{
		cout<<"cicular Queue is full:"<<endl;
	}
	else
		cQueue[rear] = data;
}
void deleteData() //deletion is done from front
{
	if(front == MAXSIZE - 1)
	{
		front = 0;
	}
	else 
	{
		front++;
	}
	cout<<"element deleted form the cQueue is"<<cQueue[front]<<endl;
}
void display()
{
	if(front = MAXSIZE -1)
	{
		front = 0;
	}
	else
	{
		front++;
	}
	if(front == rear)
	{
		cout<<"cicular Queue is empty"<<endl;
	}
	else
	{
		cout<<"elements of cicular Queue are:"<<endl;
		for(int i =(front+1);i<=rear;i++)
		{
			cout<<cQueue[i]<<" ";
		}
	}
}
int main()
{
	int choice,data;
	cout<<"1)Insert\n";
    cout<<"2)Delete\n";
    cout<<"3)Display\n";
    cout<<"4)Exit\n";

    do{
    	cout<<"enter your choice:"<<endl;
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    			cout<<"enter data for insertion:"<<endl;
    			cin>>data;
    			insert(data);
    			break;
    		case 2:
    			deleteData();
    			break;
    		case 3:
    			display();
    			break;
    		case 4:
    			exit(1);
    			break;
    		default:
    			cout<<"invalid choice"<<endl;
    	}
    }while(choice != 4);
}