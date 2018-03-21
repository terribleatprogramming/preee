

#include "operator.h"
#include <iostream>
#include <cstddef>

using namespace std;

operator::operator()
{
	top = NULL;
	size = 0;
}

operator::~operator() {

	Node* temp;

	while (top != NULL) {

		temp = top;
		top = top->next;
		delete temp;
	}

}

bool operator::isEmpty() {

	return (top == NULL);
}

void operator::push(char entry) {

	Node *newNode; 

	newNode = new Node;

	newNode->data = entry;
	newNode->next = top;
	top = newNode;
	size++;
}

char CharStack::pop() {


	if (size > 0) {
		Node *temp;
		char popValue = top->data;
		temp = top; 
		top = top->next;

		delete temp;
		return popValue;
		size--;
	}
	else {
		cout << "Stack is empty\n";
	}
	return '0';
}

char operator::topItem() {

	return top->data;
}