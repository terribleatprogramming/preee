#pragma once

#ifndef prestack_H
#define prestack_H

class prestack
{

	struct Node {

		int data;
		Node* next;
	};

private:
	Node* top;
	int size; 

public:
	prestack();
	~prestack();
	bool isEmpty();
	void push(int entry);
	int topItem();
	int pop();

};

#endif 
