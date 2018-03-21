
#include "prestack.h"
#include <cstddef>
#include <iostream>
using namespace std;

prestack::prestack()
{
	top = NULL;
	size = 0;
}

prestack::~prestack()
{
	Node * temp;
	while (top != NULL)
	{
		temp = top;
		top = top->next;
		delete temp;
	}
}

void prestack::push(int entry)
{
	Node *newNode;
	newNode = new Node;

	newNode->data = entry;
	newNode->next = top;
	top = newNode;
	size++;
}

bool prestack::isEmpty()
{
	return (top == NULL);
}

int prestack::pop()
{
	if (size > 0)
	{
		Node *temp;
		int poppedValue = top->data;
		if (top != NULL)
		{
			temp = top;
			top = top->next;
			delete temp;
		}
		size--;
		return poppedValue;
	}
	else {
		cout << "stack is empty\n";
		return 0;
	}
}

int prestack::topItem()
{
	if (size > 0)
		return top->data;
	else
		return 0;
}