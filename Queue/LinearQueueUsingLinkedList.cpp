#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;